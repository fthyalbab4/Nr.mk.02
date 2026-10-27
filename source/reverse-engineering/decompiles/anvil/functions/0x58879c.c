// rea decompile_all
// name: FUN_0058879c
// address: 0x58879c
// body: available
// range: 0x58879c-0x5888cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5887b8 (push 0x5888cc followed by fs-segment stack chaining); handler 0x5888cc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058879c(undefined4 param_1)

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
  puStack_24 = &LAB_005888cc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_9 = 0;
  local_8 = param_1;
  FUN_00588748();
  iVar3 = FUN_0050bbe0(local_8);
  if (iVar3 == 800) {
    DAT_00686b18 = FUN_0050bbe0(local_8);
    FUN_00409dfc(&DAT_00686b10,&DAT_005886f4,1,DAT_00686b18);
    FUN_00409dfc(&DAT_00686b14,&DAT_00588720,1,DAT_00686b18);
    if (-1 < DAT_00686b18 + -1) {
      iVar6 = 0;
      iVar3 = DAT_00686b18;
      do {
        uVar4 = FUN_0050be9c(local_8);
        local_a = FUN_0050bcd0(uVar4);
        *(undefined4 *)(DAT_00686b10 + iVar6 * 4) = 0;
        FUN_00408194(DAT_00686b14 + iVar6 * 4,0);
        if (local_a != '\0') {
          FUN_0050bc1c(uVar4,&local_10);
          FUN_00408194(DAT_00686b14 + iVar6 * 4,local_10);
          uVar5 = FUN_0057234c(&DAT_0057218c,1);
          *(undefined4 *)(DAT_00686b10 + iVar6 * 4) = uVar5;
          cVar2 = FUN_005723ac(*(undefined4 *)(DAT_00686b10 + iVar6 * 4),uVar4);
          if (cVar2 == '\0') goto LAB_005888b6;
        }
        FUN_00405fdc(uVar4);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_9 = 1;
  }
LAB_005888b6:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005888d3;
  puStack_24 = (undefined1 *)0x5888cb;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  return;
}
