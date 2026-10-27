// rea decompile_all
// name: FUN_004c4514
// address: 0x4c4514
// body: available
// range: 0x4c4514-0x4c45c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c4534 (push 0x4c45c3 followed by fs-segment stack chaining); handler 0x4c45c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4514(int param_1,undefined2 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined2 local_a;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004c45c3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar6 = *(int *)(*(int *)(param_1 + 0x288) + 8);
  local_a = param_2;
  local_8 = param_1;
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    puStack_20 = &stack0xfffffffc;
    do {
      uVar3 = FUN_0043b048(*(undefined4 *)(local_8 + 0x288),iVar5);
      cVar2 = FUN_00405c98(uVar3,&PTR_LAB_004a4a78);
      if (((cVar2 != '\0') &&
          (piVar4 = (int *)FUN_0043b048(*(undefined4 *)(local_8 + 0x288),iVar5),
          *(char *)((int)piVar4 + 0x59) != '\0')) &&
         (cVar2 = (**(code **)(*piVar4 + 0x5c))(), cVar2 != '\0')) {
        FUN_004ee6a0(piVar4,&local_10);
        cVar2 = FUN_005136cc(local_a,local_10);
        if (cVar2 != '\0') break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004c45ca;
  puStack_24 = (undefined1 *)0x4c45c2;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  return;
}
