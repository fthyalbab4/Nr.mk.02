// rea decompile_all
// name: FUN_0051d1e0
// address: 0x51d1e0
// body: available
// range: 0x51d1e0-0x51d32e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d1e0(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_c;

  (**(code **)(**(int **)(param_4 + -0xc) + 8))();
  if ((((*(int *)(param_4 + -0x10) != 0) && (*(int *)(*(int *)(param_4 + -0x10) + 0x34) == 0)) &&
      ((*(byte *)(*(int *)(param_4 + -0x10) + 0x1c) & 0x10) == 0)) &&
     (((*(char *)(*(int *)(param_4 + -0x10) + 0x59) != '\0' &&
       (*(char *)(*(int *)(param_4 + -0x10) + 0x5d) == param_1)) &&
      (*(char *)(*(int *)(param_4 + -0x10) + 0x29a) != '\x01')))) {
    FUN_0043ae88(*(undefined4 *)(param_4 + -0xc),*(undefined4 *)(param_4 + -0x10));
  }
  iVar2 = FUN_0051c6bc(*(undefined4 *)(param_4 + -0x14));
  if (-1 < iVar2 + -1) {
    local_c = 0;
    do {
      iVar3 = FUN_0051c6a8(*(undefined4 *)(param_4 + -0x14),local_c);
      if (((*(int *)(iVar3 + 0x34) == 0) && (*(char *)(iVar3 + 0x5d) == param_1)) &&
         (((*(byte *)(iVar3 + 0x1c) & 0x10) == 0 &&
          (((*(char *)(iVar3 + 0x59) != '\0' && (*(char *)(iVar3 + 0x29a) != '\x01')) &&
           (iVar3 != *(int *)(param_4 + -0x10))))))) {
        for (iVar5 = 0; iVar5 < *(int *)(*(int *)(param_4 + -0xc) + 8); iVar5 = iVar5 + 1) {
          uVar4 = FUN_0043b048(*(undefined4 *)(param_4 + -0xc),iVar5);
          cVar1 = FUN_0051cf9c(iVar3,uVar4,param_1);
          if (cVar1 != '\0') break;
        }
        FUN_0043b100(*(undefined4 *)(param_4 + -0xc),iVar5,iVar3);
      }
      local_c = local_c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(*(int *)(param_4 + -0xc) + 8);
  if (-1 < iVar2 + -1) {
    local_c = 0;
    do {
      uVar4 = FUN_0043b048(*(undefined4 *)(param_4 + -0xc),local_c);
      FUN_0051d024(uVar4,param_1);
      local_c = local_c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
