# 화씨 -> 섭씨 변환
Fahrenheit = input("화씨 온도를 입력하세요: ")
Celsius = round((int(Fahrenheit) - 32) / 1.8, 2)
print("화씨 온도", Fahrenheit, "는 섭씨 온도", Celsius, "입니다.")

# 섭씨 -> 화씨 변환
Celsius_input = input("섭씨 온도를 입력하세요: ")
Fahrenheit_result = round((int(Celsius_input) * 1.8) + 32, 2)
print("섭씨 온도", Celsius_input, "는 화씨 온도", Fahrenheit_result, "입니다.")
