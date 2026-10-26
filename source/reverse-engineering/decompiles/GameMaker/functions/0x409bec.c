// rea decompile_all
// name: FUN_00409bec
// address: 0x409bec
// body: available
// range: 0x409bec-0x409cde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409bec(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_14;

  puVar4 = (undefined4 *)0x0;
  if (param_1 != 0) {
    if (param_3 < 0) {
      param_5 = param_5 + param_3;
      param_3 = 0;
    }
    iVar1 = *(int *)(param_1 + -4);
    if (iVar1 < param_3) {
      param_3 = iVar1;
    }
    if (iVar1 - param_3 < param_5) {
      param_5 = iVar1 - param_3;
    }
    if (param_5 < 0) {
      param_5 = 0;
    }
    if (0 < param_5) {
      iVar1 = param_2 + (uint)*(byte *)(param_2 + 1);
      iVar2 = *(int *)(iVar1 + 2);
      piVar3 = *(int **)(iVar1 + 6);
      if (piVar3 == (int *)0x0) {
        local_14 = 0;
      }
      else {
        local_14 = *piVar3;
      }
      puVar4 = (undefined4 *)
               FUN_0040431c((int)((longlong)param_5 * (longlong)iVar2) + 8,
                            (int)((ulonglong)((longlong)param_5 * (longlong)iVar2) >> 0x20));
      *puVar4 = 1;
      puVar4[1] = param_5;
      puVar4 = puVar4 + 2;
      param_1 = param_1 + param_3 * iVar2;
      if (0 < param_5) {
        if (local_14 == 0) {
          FUN_0040450c(param_1,puVar4,param_5 * iVar2);
        }
        else {
          FUN_00404f08(puVar4,param_5 * iVar2,0);
          FUN_00409a28(puVar4,param_1,local_14,param_5);
        }
      }
    }
  }
  FUN_00409a40(param_4,param_2);
  *param_4 = puVar4;
  return;
}
