// rea decompile_all
// name: FUN_004655b8
// address: 0x4655b8
// body: available
// range: 0x4655b8-0x465669 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004655b8(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;

  bVar5 = 0;
  cVar1 = IsEqualGUID();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x4d) = 1;
    puVar3 = (undefined4 *)(param_1 + 0x41 + (uint)bVar5 * -8);
    puVar2 = param_2 + (uint)bVar5 * -2 + 1;
    *(undefined4 *)(param_1 + 0x3d) = *param_2;
    puVar4 = puVar3 + (uint)bVar5 * -2 + 1;
    *puVar3 = *puVar2;
    *puVar4 = puVar2[(uint)bVar5 * -2 + 1];
    puVar4[(uint)bVar5 * -2 + 1] = (puVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    cVar1 = IsEqualGUID();
    if (cVar1 == '\0') {
      cVar1 = IsEqualGUID();
      if (cVar1 == '\0') {
        cVar1 = IsEqualGUID();
        if (cVar1 == '\0') {
          cVar1 = IsEqualGUID();
          if (cVar1 == '\0') {
            cVar1 = IsEqualGUID();
            if (cVar1 == '\0') {
              cVar1 = IsEqualGUID();
              if (cVar1 == '\0') {
                *(undefined1 *)(param_1 + 0x3c) = 6;
              }
              else {
                *(undefined1 *)(param_1 + 0x3c) = 5;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x3c) = 3;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x3c) = 4;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x3c) = 2;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x3c) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x3c) = 0;
    }
  }
  return;
}
