// rea decompile_all
// name: FUN_006ad170
// address: 0x6ad170
// body: available
// range: 0x6ad170-0x6ad264 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ad191 (push 0x6ad265 followed by fs-segment stack chaining); handler 0x6ad265 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ad170(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x6ad186;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_006ad265;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) == 7) {
    puStack_18 = &stack0xfffffffc;
    if (*(int *)(*(int *)(param_2 + 4) + (param_3 + 1) * 0xc) == 0x6e) {
      param_3 = param_3 + 2;
      puStack_18 = &stack0xfffffffc;
      do {
        while( true ) {
          iVar1 = *(int *)(*(int *)(param_2 + 4) + param_3 * 0xc);
          if ((iVar1 == -2) || (iVar1 == 0x6f)) {
            if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) == -2) {
              FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                           L"Symbol ] expected.");
            }
            goto LAB_006ad24f;
          }
          param_3 = FUN_006ad534(local_8,param_2,param_3);
          if (*PTR_DAT_00781dc4 != '\0') goto LAB_006ad24f;
          if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) != 0x6d) break;
          param_3 = param_3 + 1;
        }
      } while (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) == 0x6f);
      FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                   L"Symbol , or ] expected.");
    }
  }
  else {
    puStack_18 = &stack0xfffffffc;
    FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                 L"Variable name expected.");
  }
LAB_006ad24f:
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006ad26c;
  puStack_1c = (undefined1 *)0x6ad264;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
