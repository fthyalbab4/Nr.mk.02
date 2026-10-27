// rea decompile_all
// name: FUN_00518a04
// address: 0x518a04
// body: available
// range: 0x518a04-0x518c80 inclusive
// range: 0x518c96-0x518ca0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x518ae5 (push 0x518c81 followed by fs-segment stack chaining); handler 0x518c81 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00518a04(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  DAT_00778d18 = DAT_00778d18 + 1;
  if (*(int *)(param_1 + 700) == 0) {
    if (param_1 == param_2) {
      *(undefined4 *)(param_1 + 0x290) = 0;
    }
    else {
      *(int *)(param_1 + 0x290) = param_2;
    }
  }
  *(int *)(DAT_007882f0 + 0x60) = param_2;
  *(int *)(DAT_007882f0 + 100) = param_1;
  puStack_1c = (undefined1 *)0x518a63;
  FUN_0043b258(*(undefined4 *)(DAT_007882f0 + 0x54),param_1,0);
  puStack_1c = (undefined1 *)0x518a74;
  FUN_0043b100(*(undefined4 *)(DAT_007882f0 + 0x54),0,param_1);
  puStack_1c = (undefined1 *)0x518a81;
  cVar3 = FUN_00405c98(param_1,&PTR_LAB_0050eaf4);
  if (cVar3 == '\0') {
    *(undefined4 *)(DAT_007882f0 + 0x68) = 0;
  }
  else {
    *(int *)(DAT_007882f0 + 0x68) = param_1;
    puStack_1c = (undefined1 *)0x518a9e;
    FUN_0043b258(*(undefined4 *)(DAT_007882f0 + 0x50),param_1,0);
    puStack_1c = (undefined1 *)0x518aaf;
    FUN_0043b100(*(undefined4 *)(DAT_007882f0 + 0x50),0,param_1);
  }
  if ((*(byte *)(param_2 + 0x54) & 0x20) != 0) {
    return 0;
  }
  *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) | 0x20;
  puStack_20 = &LAB_00518c81;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (param_1 != *(int *)(DAT_007882f0 + 0x74)) {
    puStack_1c = &stack0xfffffffc;
    if (*(int *)(DAT_007882f0 + 0x74) != 0) {
      puStack_1c = &stack0xfffffffc;
      uVar4 = FUN_004f76a8();
      *(undefined4 *)(DAT_007882f0 + 0x74) = 0;
      cVar3 = FUN_00513454(uVar4,0xb001);
      if (cVar3 == '\0') {
        FUN_0040670c();
        return 0;
      }
    }
    *(int *)(DAT_007882f0 + 0x74) = param_1;
    uVar4 = FUN_004f76a8(param_1);
    cVar3 = FUN_00513454(uVar4,CONCAT22(extraout_var,0xb000));
    if (cVar3 == '\0') {
      FUN_0040670c();
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x294) == 0) {
    *(int *)(param_1 + 0x294) = param_1;
  }
  if (*(int *)(param_1 + 0x294) != param_2) {
    while ((*(int *)(param_1 + 0x294) != 0 &&
           (cVar3 = thunk_FUN_004f2e65(*(int *)(param_1 + 0x294),param_2), cVar3 == '\0'))) {
      uVar4 = FUN_004f76a8(*(undefined4 *)(param_1 + 0x294));
      *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(*(int *)(param_1 + 0x294) + 0x34);
      cVar3 = FUN_00513454(uVar4,CONCAT22(extraout_var_00,0xb01b));
      if (cVar3 == '\0') {
        FUN_0040670c();
        return 0;
      }
    }
    while (iVar2 = param_2, *(int *)(param_1 + 0x294) != param_2) {
      do {
        iVar5 = iVar2;
        iVar2 = *(int *)(iVar5 + 0x34);
      } while (*(int *)(iVar5 + 0x34) != *(int *)(param_1 + 0x294));
      *(int *)(param_1 + 0x294) = iVar5;
      uVar4 = FUN_004f76a8(iVar5);
      cVar3 = FUN_00513454(uVar4,CONCAT22(extraout_var_01,0xb01a));
      if (cVar3 == '\0') {
        FUN_0040670c();
        return 0;
      }
    }
    piVar1 = *(int **)(param_2 + 0x34);
    if ((*(byte *)(param_2 + 0x1c) & 0x10) == 0) {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
        cVar3 = FUN_00405c98(piVar1,&PTR_LAB_0050bb50);
        if (cVar3 != '\0') {
          (**(code **)(*piVar1 + 0xf0))(piVar1,param_2);
        }
      }
    }
    FUN_004efb90(param_1,0xb007,0,param_2);
    iVar2 = *(int *)(param_1 + 0x2e0);
    if ((iVar2 != 0) && (iVar2 != param_2)) {
      FUN_004efb90(iVar2,0xb02a,0,0);
    }
  }
  *in_FS_OFFSET = uStack_24;
  *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffffffdf;
  return param_2;
}
