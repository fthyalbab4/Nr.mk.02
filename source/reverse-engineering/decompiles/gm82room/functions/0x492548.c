// rea decompile_all
// name: FUN_00492548
// address: 0x492548
// body: available
// range: 0x492548-0x4925e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492548(int param_1,int param_2,undefined4 param_3,code *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_c;

  if (*(int *)(param_1 + 0x364) == 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x288) + 8);
    if (-1 < iVar4 + -1) {
      local_c = 0;
      do {
        uVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x288),local_c);
        (*param_4)(param_5,uVar1);
        local_c = local_c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = FUN_004c00dc(param_1);
    if (-1 < iVar4 + -1) {
      local_c = 0;
      do {
        iVar2 = FUN_004c00a0(param_1,local_c);
        if (*(int *)(iVar2 + 4) == param_2) {
          iVar3 = FUN_00438f2c(*(undefined4 *)(param_1 + 0x288),iVar2);
          if (iVar3 == -1) {
            (*param_4)(param_5,iVar2);
          }
        }
        local_c = local_c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}
