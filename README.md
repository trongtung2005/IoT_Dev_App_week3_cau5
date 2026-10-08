# OneButton LED Controller continuous

## Mô tả dự án
Dự án ứng dụng vi điều khiển ESP32 và thư viện `OneButton` để sử dụng **MỘT nút nhấn duy nhất** (cắm ngoài) điều khiển linh hoạt **HAI đèn LED** (một đèn built-in và một đèn cắm ngoài) với nhiều chế độ khác nhau.

## Chức năng
Sử dụng nút nhấn ở chân GPIO 4 để điều khiển:
* **Double Click:** Chuyển đổi luân phiên quyền điều khiển giữa LED 1 và LED 2.
* **Single Click:** Đảo trạng thái (Bật/Tắt) của LED đang được chọn.
* **Long Press (Giữ nút):** Kích hoạt chế độ nhấp nháy (chu kỳ 200ms) cho LED đang được chọn.

## Yêu cầu phần cứng
* **LED 1 (Built-in):** Có sẵn trên mạch ESP32.
* **LED 2:** Cực dương cắm vào chân `D18`, cực âm nối qua điện trở 220Ω về `GND`.
* **Nút nhấn:** Một chân nối vào `D4`, chân còn lại nối về `GND`.

### Sơ đồ đấu nối phần cứng

| Linh kiện | Chân trên ESP32 | Hướng dẫn kết nối |
| :--- | :--- | :--- |
| **LED 1 (Built-in)** | `D2` (GPIO 2) | Đèn LED xanh lam tích hợp sẵn trên mạch, không cần đấu nối. |
| **LED 2 (Gắn ngoài)**| `D18` (GPIO 18) | Cực dương (chân dài) cắm vào `D18`. Cực âm (chân ngắn) nối tiếp qua điện trở rồi cắm về chân `GND`. |
| **Nút nhấn (Gắn ngoài)**| `D4` (GPIO 4) | Một chân của nút bấm nối vào `D4`, chân đối diện nối về `GND` (Cấu hình Active LOW). |

## Yêu cầu phần mềm & Môi trường phát triển
* IDE: **Visual Studio Code**.
* Công cụ biên dịch: **PlatformIO IDE**.
* Framework: Arduino.
* Thư viện phụ thuộc: `mathertel/OneButton @ ^2.6.1`.
  
## Video minh họa: https://drive.google.com/drive/folders/1nPiopzosEprU4COO4lYdoeTPR60hqkIT?usp=sharing
