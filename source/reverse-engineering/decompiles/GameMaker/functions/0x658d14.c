// rea decompile_all
// name: FUN_00658d14
// address: 0x658d14
// body: available
// range: 0x658d14-0x658e66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x658d3b (push 0x658e67 followed by fs-segment stack chaining); handler 0x658e67 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00658d14(int param_1,int param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  int local_24;
  undefined1 local_1c [24];

  puStack_38 = (undefined1 *)0x658d30;
  FUN_00408d1c(local_1c,&DAT_00656108);
  puStack_3c = &LAB_00658e67;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_28 = *(int *)(param_1 + 0x2f0);
  puStack_38 = &stack0xfffffffc;
  if (-1 < local_28 + -1) {
    local_24 = 0;
    puStack_38 = &stack0xfffffffc;
    do {
      iVar5 = local_24;
      if (0 < local_24) {
        do {
          if (param_2 == 1) {
            bVar1 = *(int *)(*(int *)(param_1 + 0x2f4) + iVar5 * 0x18) <
                    *(int *)(*(int *)(param_1 + 0x2f4) + -0x18 + iVar5 * 0x18);
          }
          else if (param_2 == 2) {
            bVar1 = *(int *)(*(int *)(param_1 + 0x2f4) + 4 + iVar5 * 0x18) <
                    *(int *)(*(int *)(param_1 + 0x2f4) + -0x14 + iVar5 * 0x18);
          }
          else {
            iVar3 = FUN_0062cd94(*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 8 + iVar5 * 0x18));
            iVar4 = FUN_0062cd94(*(undefined4 *)(*(int *)(param_1 + 0x2f4) + -0x10 + iVar5 * 0x18));
            if (((iVar3 == 0) || (iVar4 == 0)) || (*(int *)(iVar3 + 0xc) <= *(int *)(iVar4 + 0xc)))
            {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
          }
          if (!bVar1) break;
          FUN_00409084(local_1c,*(int *)(param_1 + 0x2f4) + iVar5 * 0x18,&DAT_00656108);
          FUN_00409084(*(int *)(param_1 + 0x2f4) + iVar5 * 0x18,
                       *(int *)(param_1 + 0x2f4) + -0x18 + iVar5 * 0x18,&DAT_00656108);
          FUN_00409084(*(int *)(param_1 + 0x2f4) + -0x18 + iVar5 * 0x18,local_1c,&DAT_00656108);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  puVar2 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00658e6e;
  puStack_3c = (undefined1 *)0x658e66;
  FUN_00408df4(local_1c,&DAT_00656108,puVar2);
  return;
}
