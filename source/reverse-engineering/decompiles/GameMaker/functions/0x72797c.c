// rea decompile_all
// name: FUN_0072797c
// address: 0x72797c
// body: available
// range: 0x72797c-0x727aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72799a (push 0x727aac followed by fs-segment stack chaining); handler 0x727aac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072797c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined4 *puVar6;
  int *piVar7;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_00727aac;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  local_10 = 0;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00406eb0(param_1 + 0x18,&LAB_00727ac8);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  uVar3 = thunk_FUN_00407688(param_1 + 0x18);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + -4);
  }
  piVar7 = &local_10;
  puVar6 = &local_8;
  cVar2 = FUN_00726cbc(uVar3,uVar4,*(undefined1 *)(*(int *)(param_1 + 0xc) + 0x12d),puVar6,&local_14
                      );
  if (cVar2 != '\0') {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + -4);
    }
    FUN_00727334(param_1,iVar5 + 2 + local_14);
    FUN_00404f08(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),0);
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar3 = thunk_FUN_00407688(param_1 + 0x14);
      uVar4 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + -4);
      }
      FUN_0040450c(uVar3,*(undefined4 *)(param_1 + 4),uVar4);
    }
    iVar5 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + -4);
    }
    *(undefined1 *)(iVar5 + *(int *)(param_1 + 4) + 1) = 0;
    if (0 < local_14) {
      iVar5 = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x14) + -4);
      }
      FUN_0040450c(local_10,*(int *)(param_1 + 4) + iVar5 + 2,local_14);
    }
    FUN_007275d4(param_1,local_c);
  }
  if (local_10 != 0) {
    FUN_00404338(local_10);
  }
  *in_FS_OFFSET = (int)puVar6;
  thunk_FUN_00406e5c(&local_8,puVar6,piVar7,&LAB_00727ab3);
  return;
}
