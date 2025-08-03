class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        # just find the city in the second index that does not occur in the first index
        first_city = []
        for path in paths:
            first_city.append(path[0])

        # now check the second city, if it doesnt exist then it means it doesnt have any outgoing
        for path in paths:
            if path[1] not in first_city:
                return path[1]

        return "impossible"
