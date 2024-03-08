--[[                                                                          --[[
  Author | Henry Morales
    File | LightOJ-Problems/Helpers/1109.lua
  Source | https://github.com/Skeptx/LightOJ-Problems/blob/main/Helpers/1109.lua
  Notice | Copyright 2024 Henry Morales
   Notes | Also see LightOJ-Problems/Submissions/1109.c
--]]                                                                          --]]

local order = {}
local factors = {}
for i = 1, 1000 do
	table.insert(order, i)
	factors[i] = math.sqrt(i) == math.floor(math.sqrt(i)) and 1 or 2
	for j = 2, math.sqrt(i) do
		if i / j == math.floor(i / j) then
			factors[i] = factors[i] + 2
		end
	end
end
table.sort(order, function(a, b)
	return factors[a] < factors[b] or factors[a] == factors[b] and a > b
end)
io.write("int_fast16_t order[1001] = {0")
for i = 1, 1000 do
	io.write(", ", order[i])
end
io.write("};")
