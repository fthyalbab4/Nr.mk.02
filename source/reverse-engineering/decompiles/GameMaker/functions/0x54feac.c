// rea decompile_all
// name: FUN_0054feac
// address: 0x54feac
// body: available
// range: 0x54feac-0x54ff7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0054feac(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint local_1c;
  uint local_18;

  iVar1 = param_1[1];
  local_18 = (uint)(0x3b9ac9f4 / (ulonglong)param_3);
  if (local_18 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)();
  }
  if ((int)param_4 <= (int)local_18) {
    local_18 = param_4;
  }
  *(uint *)(iVar1 + 0x50) = local_18;
  iVar1 = FUN_0054fcdc(param_1,param_2,param_4 << 2);
  local_1c = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - local_1c <= local_18) {
        local_18 = param_4 - local_1c;
      }
      iVar2 = FUN_0054fe0c(param_1,param_2,local_18 * param_3);
      piVar3 = (int *)(iVar1 + local_1c * 4);
      for (uVar4 = local_18; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar3 = iVar2;
        local_1c = local_1c + 1;
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + param_3;
      }
    } while (local_1c < param_4);
  }
  return iVar1;
}
