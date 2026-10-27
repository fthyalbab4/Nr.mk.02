// rea decompile_all
// name: FUN_00513ce4
// address: 0x513ce4
// body: available
// range: 0x513ce4-0x513e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x513d00 (push 0x513e14 followed by fs-segment stack chaining); handler 0x513e14 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513ce4(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  char local_a;
  undefined1 local_9;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00513e14;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_9 = 0;
  local_8 = param_1;
  FUN_00513c90();
  iVar3 = FUN_0050bbe0(local_8);
  if (iVar3 == 800) {
    DAT_006840c8 = FUN_0050bbe0(local_8);
    FUN_00409dfc(&DAT_006840c0,&DAT_00513c3c,1,DAT_006840c8);
    FUN_00409dfc(&DAT_006840c4,&DAT_00513c68,1,DAT_006840c8);
    if (-1 < DAT_006840c8 + -1) {
      iVar6 = 0;
      iVar3 = DAT_006840c8;
      do {
        uVar4 = FUN_0050be9c(local_8);
        local_a = FUN_0050bcd0(uVar4);
        *(undefined4 *)(DAT_006840c0 + iVar6 * 4) = 0;
        FUN_00408194(DAT_006840c4 + iVar6 * 4,0);
        if (local_a != '\0') {
          FUN_0050bc1c(uVar4,&local_10);
          FUN_00408194(DAT_006840c4 + iVar6 * 4,local_10);
          uVar5 = FUN_00513894(&DAT_005134b8,1);
          *(undefined4 *)(DAT_006840c0 + iVar6 * 4) = uVar5;
          cVar2 = FUN_00513940(*(undefined4 *)(DAT_006840c0 + iVar6 * 4),uVar4);
          if (cVar2 == '\0') goto LAB_00513dfe;
        }
        FUN_00405fdc(uVar4);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_9 = 1;
  }
LAB_00513dfe:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00513e1b;
  puStack_24 = (undefined1 *)0x513e13;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  return;
}
