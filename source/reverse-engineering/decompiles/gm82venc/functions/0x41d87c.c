// rea decompile_all
// name: FUN_0041d87c
// address: 0x41d87c
// body: available
// range: 0x41d87c-0x41d93c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41d89d (push 0x41d93d followed by fs-segment stack chaining); handler 0x41d93d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d87c(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = (undefined1 *)0x41d892;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_1c = &LAB_0041d93d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (param_3 < 1) {
    bVar6 = true;
    puStack_18 = &stack0xfffffffc;
  }
  else {
    iVar4 = local_8;
    puStack_18 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_18 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_18 = &stack0xfffffffc;
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + -4);
    }
    bVar6 = iVar3 < param_3;
  }
  if (bVar6) {
    bVar6 = true;
  }
  else {
    cVar2 = FUN_0041d068(local_8,param_3);
    bVar6 = cVar2 != '\0';
  }
  if (!bVar6) {
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    uVar5 = FUN_00408220(param_1);
    thunk_FUN_004179d6(uVar5,*(undefined2 *)(iVar4 + -2 + param_3 * 2));
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0041d944;
  puStack_1c = (undefined1 *)0x41d93c;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
