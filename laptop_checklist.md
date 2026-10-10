# https://laptopanalyzer.com/?utm_source=chatgpt.com

# Lenovo ThinkPad Used Laptop Buying Checklist

Use this checklist when inspecting a used Lenovo ThinkPad. Complete the important checks before paying.

## 1. Model and Serial Number Verification

- [ ] Open Command Prompt (CMD) and run:

  ```cmd
  wmic csproduct get name, identifyingnumber
  ```

- [ ] Check the model and serial number in BIOS.
- [ ] Compare the serial number with the sticker on the bottom of the laptop.
- [ ] Enter the serial number on the official Lenovo Support website: <https://support.lenovo.com/>
- [ ] Confirm the online model matches the actual laptop.
- [ ] Check warranty status and original specifications, if available.
- [ ] If the serial numbers do not match, stop and investigate before buying.

## 2. CPU Model, Generation, and Performance

- [ ] Run this command in CMD:

  ```cmd
  wmic cpu get name
  ```

- [ ] Record the complete CPU name—not just “Core i5/i7” or “Ryzen 5/7.”
- [ ] Verify the processor specifications on the official Intel or AMD website.
- [ ] Check the CPU's release year, cores, threads, base frequency, and boost frequency.
- [ ] Compare exact CPU models using:
  - <https://www.notebookcheck.net/>
  - <https://www.cpubenchmark.net/>
- [ ] Test the laptop under load and check for overheating, throttling, or loud fan noise.
- [ ] Do not assume an older Core i7 is automatically better than a newer Core i5 or Ryzen 5. Compare exact models and real-world performance.

## 3. RAM Check

- [ ] Run:

  ```cmd
  systeminfo
  ```

- [ ] Confirm the installed RAM. For software development, 16 GB or more is preferable when the budget allows.
- [ ] Check whether RAM is upgradeable or soldered.
- [ ] To test memory, press `Win + R`, type `mdsched.exe`, and follow the prompts.

## 4. SSD Health and Performance

- [ ] Check the drive model and reported capacity in CMD:

  ```cmd
  wmic diskdrive get model,size,status
  ```

- [ ] Use CrystalDiskInfo from its official website: <https://crystalmark.info/en/software/crystaldiskinfo/>
- [ ] Check that the health status is preferably **Good**.
- [ ] Review any available critical warnings, available spare, percentage used, and media/data-integrity errors.
- [ ] Confirm the SSD capacity matches the seller's claim.
- [ ] Check SSD temperature and warning indicators.
- [ ] Optionally test read/write speed with CrystalDiskMark: <https://crystalmark.info/en/software/crystaldiskmark/>
- [ ] Watch for freezing, slow booting, or disk errors.
- [ ] Do not rely only on CMD showing `OK`; this does not guarantee the SSD is healthy.

## 5. Battery Check

- [ ] Generate a battery report:

  ```cmd
  powercfg /batteryreport
  ```

- [ ] Open the HTML report at the file path shown by CMD.
- [ ] Compare **Design Capacity** with **Full Charge Capacity**. A much lower full-charge capacity indicates battery wear.
- [ ] Check the cycle count if available.
- [ ] Confirm the battery charges and the laptop works unplugged.
- [ ] Check for battery swelling. Do not buy or use a laptop with a swollen battery.

## 6. Display and Physical Condition

- [ ] Check for dead pixels, white spots, flickering, and lines.
- [ ] Verify the screen resolution—confirm Full HD (1920 × 1080) if advertised.
- [ ] Inspect hinges, chassis, screws, and signs of liquid damage.
- [ ] Test every keyboard key, TrackPoint, touchpad, and keyboard backlight.
- [ ] Test webcam, microphone, speakers, Wi-Fi, and Bluetooth.

## 7. Ports and Other Hardware

- [ ] Test USB-A, USB-C, HDMI, audio jack, and charging port, where present.
- [ ] Check fan noise and overheating.
- [ ] Test sleep, restart, shutdown, and charging.
- [ ] Check the charger and confirm charging is stable.
- [ ] Run Lenovo hardware diagnostics if available.

## 8. BIOS and Ownership Security

- [ ] Enter BIOS and verify the model and serial number.
- [ ] Confirm there is no unknown BIOS supervisor password or BIOS lock.
- [ ] Check for company/school management or Windows Autopilot enrollment.
- [ ] Ask the seller to demonstrate a reset and fresh setup without organizational locks.
- [ ] Do not bypass a lock; ask the seller to have the organization remove it legitimately before purchase.

## 9. Before Payment

- [ ] Confirm all advertised specifications.
- [ ] Get a written receipt showing the model, serial number, price, and warranty.
- [ ] Confirm the replacement/return period in writing.
- [ ] Test the laptop thoroughly before paying.

## Red Flags — Pause the Purchase

- [ ] Serial number mismatch or suspicious ownership history.
- [ ] BIOS/supervisor password the seller cannot remove.
- [ ] SSD health warnings or failed diagnostics.
- [ ] Swollen battery, charging problems, screen defects, or hinge damage.
- [ ] Company/school enrollment lock that the seller cannot have removed.
- [ ] Seller refuses reasonable testing or provides no clear return policy.

## Quick Reference: Useful Commands

| Purpose | Command |
|---|---|
| Model and serial number | `wmic csproduct get name, identifyingnumber` |
| CPU name | `wmic cpu get name` |
| System information and RAM | `systeminfo` |
| SSD model, size, basic status | `wmic diskdrive get model,size,status` |
| Battery report | `powercfg /batteryreport` |
| Windows Memory Diagnostic | Run `mdsched.exe` from `Win + R` |

**Compatibility note:** `wmic` is deprecated and may be unavailable on newer Windows installations. If a command fails, use `Win + R` → `msinfo32` for system details, Task Manager → Performance → CPU for the CPU name, and CrystalDiskInfo for SSD health.

**Buying tip:** For software development, prioritize a healthy SSD, at least 16 GB RAM if affordable, a good Full HD IPS display, and a processor with suitable performance. Compare exact CPU models rather than relying only on the Core i5/i7 or Ryzen 5/7 label.
