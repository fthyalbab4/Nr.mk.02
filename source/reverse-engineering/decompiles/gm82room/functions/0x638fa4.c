// rea decompile_all
// name: FUN_00638fa4
// address: 0x638fa4
// body: available
// range: 0x638fa4-0x63913f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00638fa4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_stack_0000000c;
  int local_c;

  iVar1 = FUN_004048b8();
  if (iVar1 == -1) {
    uVar2 = FUN_004048b8();
    FUN_00637dcc(uVar2,param_1,0.5 <= *(double *)(in_stack_0000000c + 0x38));
  }
  else if (iVar1 == -2) {
    uVar2 = FUN_004048b8();
    FUN_00637dcc(uVar2,param_2,0.5 <= *(double *)(in_stack_0000000c + 0x38));
  }
  else if (iVar1 == -3) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar1 + -1) {
      local_c = 0;
      do {
        uVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,local_c);
        uVar3 = FUN_004048b8();
        FUN_00637dcc(uVar3,uVar2,0.5 <= *(double *)(in_stack_0000000c + 0x38));
        local_c = local_c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else if (iVar1 < 100000) {
    iVar4 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,iVar1);
    if (-1 < iVar4 + -1) {
      local_c = 0;
      do {
        uVar2 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,iVar1,local_c);
        uVar3 = FUN_004048b8();
        FUN_00637dcc(uVar3,uVar2,0.5 <= *(double *)(in_stack_0000000c + 0x38));
        local_c = local_c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    iVar4 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar4 + -1) {
      local_c = 0;
      do {
        iVar5 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,local_c);
        if (iVar1 == *(int *)(iVar5 + 4)) {
          uVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,local_c);
          uVar3 = FUN_004048b8();
          FUN_00637dcc(uVar3,uVar2,0.5 <= *(double *)(in_stack_0000000c + 0x38));
          return;
        }
        local_c = local_c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}
