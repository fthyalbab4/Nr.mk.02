// rea decompile_all
// name: FUN_006ad994
// address: 0x6ad994
// body: available
// range: 0x6ad994-0x6ada59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ad9b5 (push 0x6ada5a followed by fs-segment stack chaining); handler 0x6ada5a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad994(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x6ad9aa;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_006ada5a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar3 = FUN_006ad534(local_8,param_2,param_3 + 1);
  if (*PTR_DAT_00781dc4 == '\0') {
    if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0xc) == 0xb) {
      iVar3 = iVar3 + 1;
      do {
        iVar1 = *(int *)(*(int *)(param_2 + 4) + iVar3 * 0xc);
        if ((iVar1 == -2) || (iVar1 == 0xc)) {
          if (*(int *)(*(int *)(param_2 + 4) + iVar3 * 0xc) != 0xc) {
            FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + iVar3 * 0xc),
                         L"Symbol } expected.");
          }
          break;
        }
        iVar3 = FUN_006adf48(local_8,param_2,iVar3);
      } while (*PTR_DAT_00781dc4 == '\0');
    }
    else {
      FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + iVar3 * 0xc),
                   L"Symbol { expected.");
    }
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006ada61;
  puStack_1c = (undefined1 *)0x6ada59;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
