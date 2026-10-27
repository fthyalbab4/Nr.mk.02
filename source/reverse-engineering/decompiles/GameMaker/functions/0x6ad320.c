// rea decompile_all
// name: FUN_006ad320
// address: 0x6ad320
// body: available
// range: 0x6ad320-0x6ad416 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ad341 (push 0x6ad417 followed by fs-segment stack chaining); handler 0x6ad417 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad320(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x6ad336;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_006ad417;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = *(int *)(*(int *)(param_2 + 4) + param_3 * 0xc);
  if (iVar2 < 0x6b) {
    if (iVar2 == 0x6a) {
      puStack_18 = &stack0xfffffffc;
      iVar2 = FUN_006ad534(local_8,param_2,param_3 + 1);
      if ((*PTR_DAT_00781dc4 == '\0') && (*(int *)(*(int *)(param_2 + 4) + iVar2 * 0xc) != 0x6b)) {
        FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + iVar2 * 0xc),
                     L"Symbol ) expected.");
      }
      goto LAB_006ad401;
    }
    puStack_18 = &stack0xfffffffc;
    if (iVar2 == 5) goto LAB_006ad401;
    if (iVar2 == 6) {
      puStack_18 = &stack0xfffffffc;
      FUN_006aceb4(local_8,param_2,param_3);
      goto LAB_006ad401;
    }
    if (iVar2 == 7) {
      puStack_18 = &stack0xfffffffc;
      FUN_006ad170(local_8,param_2,param_3);
      goto LAB_006ad401;
    }
  }
  else if (((iVar2 == 0xcb) || (iVar2 - 0xd2U < 2)) || (iVar2 - 0xd2U == 10)) {
    puStack_18 = &stack0xfffffffc;
    FUN_006ad4ac(local_8,param_2,param_3 + 1);
    goto LAB_006ad401;
  }
  puStack_18 = &stack0xfffffffc;
  FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
               L"Unexpected symbol in expression.");
LAB_006ad401:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006ad41e;
  puStack_1c = (undefined1 *)0x6ad416;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
