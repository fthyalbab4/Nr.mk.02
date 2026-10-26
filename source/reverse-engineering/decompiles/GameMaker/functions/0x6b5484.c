// rea decompile_all
// name: FUN_006b5484
// address: 0x6b5484
// body: available
// range: 0x6b5484-0x6b55dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b54a2 (push 0x6b55dd followed by fs-segment stack chaining); handler 0x6b55dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5484(int param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_3c;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  puStack_30 = &LAB_006b55dd;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  local_9 = param_2;
  cVar2 = FUN_006bb34c(*(undefined4 *)(param_1 + 0x350));
  if (((cVar2 != '\0') || (local_9 != '\0')) || (*PTR_DAT_0078219c != '\0')) {
    cVar2 = FUN_006b288c(param_1);
    if (cVar2 == '\0') {
      FUN_006b7d0c(param_1,*(undefined4 *)(param_1 + 0x2ec),&local_8);
      iVar3 = FUN_006aff9c(local_8,*(undefined4 *)(param_1 + 0x2f0));
      iVar4 = FUN_006b0028(local_8,*(undefined4 *)(param_1 + 0x2f0));
      if (iVar3 + 1 < iVar4) {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + *(int *)(param_1 + 0x2ec) * 0x10) + 4
                    + iVar3 * 0xc) == 0) {
          FUN_004086a8(local_8,iVar3 + 1,iVar4 - iVar3,&local_8);
          iVar3 = (iVar3 - *(int *)(param_1 + 0x2f8)) * *(int *)(param_1 + 0x2dc);
          if (*PTR_DAT_007823a4 != '\0') {
            iVar3 = iVar3 + *(int *)(param_1 + 0x2dc) * 5;
          }
          FUN_00438bf4(iVar3,((*(int *)(param_1 + 0x2ec) - *(int *)(param_1 + 0x2f4)) + 1) *
                             *(int *)(param_1 + 0x2e0),local_1c);
          FUN_004ee09c(param_1,local_1c,&local_14);
          uStackY_3c = local_10;
          FUN_006bb1a0(*(undefined4 *)(param_1 + 0x350),local_8,local_14);
        }
        else {
          FUN_006bb30c(*(undefined4 *)(param_1 + 0x350));
        }
      }
      else {
        FUN_006bb30c(*(undefined4 *)(param_1 + 0x350));
      }
    }
    else {
      FUN_006bb30c(*(undefined4 *)(param_1 + 0x350));
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStackY_3c;
  puStack_34 = &LAB_006b55e4;
  thunk_FUN_00406e5c(&local_8,uStackY_3c,puVar1);
  return;
}
