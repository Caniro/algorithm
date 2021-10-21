# 다리를 지나는 트럭 : https://programmers.co.kr/learn/courses/30/lessons/42583

def solution(bridge_length, weight, truck_weights):
    def run_truck():
        nonlocal in_bridge, total_weight
        for truck in in_bridge:
            if truck[1] == answer: # 건너기 완료 시간이 되면 다리에서 제거
                total_weight -= truck[0]
                in_bridge.remove(truck)
    
    def bring_truck():
        nonlocal in_bridge, total_weight
        if len(in_bridge) >= bridge_length or not truck_weights:
            return
        if total_weight + truck_weights[0] > weight:
            return
        truck_weight = truck_weights.pop(0)
        total_weight += truck_weight
        in_bridge.append([truck_weight, answer + bridge_length])
    
    answer = 1
    in_bridge = [] # [무게, 건너기 완료 시간]
    total_weight = 0
    bring_truck()
    
    while in_bridge:
        answer += 1
        run_truck()
        bring_truck()

    return answer
