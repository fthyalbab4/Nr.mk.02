// rea decompile_all
// name: FUN_0062637c
// address: 0x62637c
// body: available
// range: 0x62637c-0x6264bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x626394 (push 0x6264be followed by fs-segment stack chaining); handler 0x6264be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062637c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  undefined4 in_stack_ffffffd4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_006264be;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0xc) == '\0') ||
     (puVar1 = &stack0xfffffffc, *(int *)(param_1 + 0x1c) == 0)) goto LAB_006264a3;
  puVar1 = &stack0xfffffffc;
  if (*PTR_PTR_0068909c == '\0') {
LAB_006263fb:
    puStack_20 = puVar1;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 1) {
      FUN_0050d110(&local_10);
      uStackY_34 = *(undefined4 *)(param_1 + 4);
      in_stack_ffffffd4 = local_10;
      FUN_0040875c(&local_c,3);
      FUN_006262c0(param_1,local_c);
    }
    else if (iVar2 == 2) {
      in_stack_ffffffd4 = 0x626444;
      FUN_006262c0(param_1,*(undefined4 *)(param_1 + 4));
    }
    else if (iVar2 == 3) {
      if (*PTR_PTR_0068909c != '\0') {
        in_stack_ffffffd4 = 0x62645e;
        FUN_0061156c(&PTR_DAT_0062656c,0);
        puVar1 = puStack_20;
        goto LAB_006264a3;
      }
      FUN_00416b78(*(undefined4 *)(param_1 + 0x20));
      in_stack_ffffffd4 = *(undefined4 *)(param_1 + 0x20);
      uStackY_34 = *(undefined4 *)(param_1 + 4);
      FUN_0040875c(&local_14,3);
      FUN_006262c0(param_1,local_14);
    }
    puVar1 = puStack_20;
    if (*(char *)(param_1 + 0x25) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
      FUN_00405fdc(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
      puVar1 = puStack_20;
    }
  }
  else {
    iVar2 = FUN_00408d44(&DAT_006264dc,*(undefined4 *)(param_1 + 4));
    if (iVar2 == 0) {
      in_stack_ffffffd4 = 0x6263d8;
      iVar2 = FUN_00408d44(&DAT_006264ec,*(undefined4 *)(param_1 + 4));
      puVar1 = puStack_20;
      if (iVar2 == 0) goto LAB_006263fb;
    }
    FUN_00408678(&local_8,&PTR_DAT_006264fc,*(undefined4 *)(param_1 + 4));
    in_stack_ffffffd4 = 0x6263f6;
    FUN_0061156c(local_8,0);
    puVar1 = puStack_20;
  }
LAB_006264a3:
  puStack_20 = puVar1;
  *in_FS_OFFSET = uStackY_34;
  thunk_FUN_004072fc(&local_14,4,in_stack_ffffffd4,&LAB_006264c5);
  return;
}
