# 카약과 강풍 : https://www.acmicpc.net/problem/2891

N, S, R = map(int, input().split())
hurt_teams = sorted(list(map(int, input().split())))
extra_teams = sorted(list(map(int, input().split())))

for extra_team in extra_teams:
    if extra_team in hurt_teams:
        hurt_teams.pop(hurt_teams.index(extra_team))
        extra_teams.pop(extra_teams.index(extra_team))
        R -= 1
        S -= 1

fixed = 0
for i in range(R):
    for j in range(S):
        if hurt_teams[j] == -2:
            continue
        extra = extra_teams[i]
        hurt = hurt_teams[j]
        if hurt >= extra - 1 and hurt <= extra + 1:
            fixed += 1
            extra_teams[i] = -2
            hurt_teams[j] = -2
print(S - fixed)

# 깔끔한 풀이

N, S, R = map(int, input().split())
hurt_teams = list(map(int, input().split()))
extra_teams = list(map(int, input().split()))

for extra_team in extra_teams:
    if extra_team in hurt_teams:
        hurt_teams.remove(extra_team)
    elif extra_team - 1 in hurt_teams:
        hurt_teams.remove(extra_team - 1)
    elif extra_team + 1 in hurt_teams:
        hurt_teams.remove(extra_team + 1)

print(len(hurt_teams))
