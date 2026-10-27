// rea decompile_all
// name: FUN_006aceb4
// address: 0x6aceb4
// body: available
// range: 0x6aceb4-0x6ad00d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6aced7 (push 0x6ad00e followed by fs-segment stack chaining); handler 0x6ad00e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aceb4(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_c;
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x6acecc;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_24 = &LAB_006ad00e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) == 6) {
    uVar1 = *(undefined4 *)(*(int *)(param_2 + 4) + 4 + param_3 * 0xc);
    if (*(int *)(*(int *)(param_2 + 4) + (param_3 + 1) * 0xc) == 0x6a) {
      param_3 = param_3 + 2;
      local_c = 0;
      puStack_20 = &stack0xfffffffc;
      do {
        while( true ) {
          iVar3 = *(int *)(*(int *)(param_2 + 4) + param_3 * 0xc);
          if ((iVar3 == -2) || (iVar3 == 0x6b)) {
            if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) == -2) {
              FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                           L"Symbol ) expected.");
            }
            else if ((0x10 < local_c) ||
                    ((iVar3 = FUN_006970e8(uVar1), -1 < iVar3 &&
                     (iVar3 = FUN_006970e8(uVar1), iVar3 != local_c)))) {
              FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                           L"Wrong number of arguments to function or script.");
            }
            goto LAB_006acff8;
          }
          local_c = local_c + 1;
          param_3 = FUN_006ad534(local_8,param_2,param_3);
          if (*PTR_DAT_00781dc4 != '\0') goto LAB_006acff8;
          if (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) != 0x6d) break;
          param_3 = param_3 + 1;
        }
      } while (*(int *)(*(int *)(param_2 + 4) + param_3 * 0xc) == 0x6b);
      FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                   L"Symbol , or ) expected.");
    }
    else {
      puStack_20 = &stack0xfffffffc;
      FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + (param_3 + 1) * 0xc),
                   L"Symbol ( expected.");
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    FUN_006ae3bc(local_8,*(undefined4 *)(*(int *)(param_2 + 4) + 8 + param_3 * 0xc),
                 L"Function name expected.");
  }
LAB_006acff8:
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006ad015;
  puStack_24 = (undefined1 *)0x6ad00d;
  thunk_FUN_00406e5c(&local_8,uStack_28,puVar2);
  return;
}
