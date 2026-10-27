// rea decompile_all
// name: FUN_007026a4
// address: 0x7026a4
// body: available
// range: 0x7026a4-0x7027e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7026c5 (push 0x7027e7 followed by fs-segment stack chaining); handler 0x7027e7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007026a4(int param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 *local_30;
  int local_28;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;

  puStack_60 = (undefined1 *)0x7026ba;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_64 = &LAB_007027e7;
  uStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_68;
  puStack_60 = &stack0xfffffffc;
  cVar3 = FUN_00416e40(local_8);
  if (cVar3 != '\0') {
    FUN_00407f44(local_8);
    iVar4 = GdipCreateBitmapFromFile();
    if (iVar4 == 0) {
      GdipGetImageWidth();
      GdipGetImageHeight();
      GdipBitmapLockBits();
      *(undefined4 *)(param_1 + 4) = local_40;
      *(int *)(param_1 + 8) = local_3c;
      lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)local_3c;
      uVar5 = FUN_0040431c((int)lVar1 * 4,(int)((ulonglong)lVar1 >> 0x20));
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      local_1c = local_30;
      local_28 = *(int *)(param_1 + 8);
      if (-1 < local_28 + -1) {
        local_18 = 0;
        do {
          iVar4 = *(int *)(param_1 + 4);
          if (-1 < iVar4 + -1) {
            local_14 = 0;
            puVar6 = local_1c;
            do {
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (local_18 * *(int *)(param_1 + 4) + local_14) * 4) =
                   *puVar6;
              puVar6 = puVar6 + 1;
              local_14 = local_14 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_1c = (undefined4 *)((int)local_1c + local_38);
          local_18 = local_18 + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      FUN_00701bac(param_1);
      GdipBitmapUnlockBits();
      GdipDisposeImage();
    }
  }
  puVar2 = puStack_60;
  *in_FS_OFFSET = uStack_68;
  puStack_60 = &LAB_007027ee;
  puStack_64 = (undefined1 *)0x7027e6;
  thunk_FUN_00406e5c(&local_8,uStack_68,puVar2);
  return;
}
