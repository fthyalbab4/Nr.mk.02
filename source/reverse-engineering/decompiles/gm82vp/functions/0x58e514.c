// rea decompile_all
// name: FUN_0058e514
// address: 0x58e514
// body: available
// range: 0x58e514-0x58e618 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058e514(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_24;
  undefined4 local_1c;

  iVar1 = DAT_00686b30 + param_1 * 0x58;
  local_1c = *(int *)(iVar1 + 8);
  if (-1 < local_1c + -1) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar1 + 4) + iVar4 * 0x68;
      iVar3 = DAT_00686b28 + *(int *)(iVar2 + 4) * 0x120;
      *(double *)(iVar2 + 0x58) = *(double *)(iVar2 + 0x58) + *(double *)(iVar3 + 0x20);
      if (*(double *)(iVar2 + 0x58) < 0.0) {
        *(undefined4 *)(iVar2 + 0x58) = 0;
        *(undefined4 *)(iVar2 + 0x5c) = 0;
      }
      FUN_0058b5a8(*(int *)(iVar1 + 4) + iVar4 * 0x68);
      if (*(int *)(iVar2 + 0xc) < 1) {
        local_24 = 1.0;
      }
      else {
        local_24 = (double)(*(int *)(iVar2 + 8) * 2) / (double)*(int *)(iVar2 + 0xc);
      }
      if (1.0 <= local_24) {
        *(double *)(iVar2 + 0x50) =
             (double)(((float)local_24 - 1.0) * (float)*(double *)(iVar3 + 0x110) +
                     (2.0 - (float)local_24) * (float)*(double *)(iVar3 + 0x108));
      }
      else {
        *(double *)(iVar2 + 0x50) =
             *(double *)(iVar3 + 0x108) * local_24 + (1.0 - local_24) * *(double *)(iVar3 + 0x100);
      }
      iVar4 = iVar4 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}
