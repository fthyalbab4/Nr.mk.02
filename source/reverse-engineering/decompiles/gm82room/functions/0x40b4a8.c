// rea decompile_all
// name: FUN_0040b4a8
// address: 0x40b4a8
// body: available
// range: 0x40b4a8-0x40b5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40b4ce (push 0x40b5b8 followed by fs-segment stack chaining); handler 0x40b5b8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b4a8(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x40b4c3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_0040b5b8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004072d8(param_2);
  if (local_8 != 0) {
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407488(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    FUN_00407c34(&local_c,iVar3 * 3,0xfde9);
    iVar2 = local_c;
    if ((local_c != 0) && (*(short *)(local_c + -10) != 1)) {
      iVar2 = FUN_004074b8(&local_c,local_c,CONCAT22(extraout_var,0xfde9));
    }
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = *(int *)(iVar2 + -4);
    }
    uVar4 = FUN_00408220(local_8);
    uVar5 = FUN_00407ae0(local_c);
    iVar2 = FUN_0040b394(uVar5,iVar6 + 1,uVar4,iVar3);
    if (iVar2 < 1) {
      FUN_004072d8(&local_c);
    }
    else {
      FUN_00407c34(&local_c,iVar2 + -1,0xfde9);
    }
    FUN_0040732c(param_2,local_c);
    if (*param_2 != 0) {
      *(undefined2 *)(*param_2 + -0xc) = 0xfde9;
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0040b5bf;
  puStack_20 = (undefined1 *)0x40b5af;
  FUN_004072d8(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x40b5b7;
  thunk_FUN_004072d8(&local_8);
  return;
}
