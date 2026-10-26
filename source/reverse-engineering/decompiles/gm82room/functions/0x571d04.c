// rea decompile_all
// name: FUN_00571d04
// address: 0x571d04
// body: available
// range: 0x571d04-0x571e4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x571d20 (push 0x571e4b followed by fs-segment stack chaining); handler 0x571e4b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00571d04(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  char local_11;
  int local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00571e4b;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_9 = 0;
  local_8 = param_1;
  FUN_0057186c();
  iVar3 = FUN_0050bbe0(local_8);
  if (iVar3 == 800) {
    DAT_00686ab0 = FUN_0050bbe0(local_8);
    FUN_00409dfc(&DAT_00686aa8,&DAT_00571810,1,DAT_00686ab0);
    FUN_00409dfc(&DAT_00686aac,&DAT_0057183c,1,DAT_00686ab0);
    local_10 = 0;
    if (-1 < DAT_00686ab0 + -1) {
      iVar6 = 0;
      iVar3 = DAT_00686ab0;
      do {
        uVar4 = FUN_0050be9c(local_8);
        local_11 = FUN_0050bcd0(uVar4);
        *(undefined4 *)(DAT_00686aa8 + iVar6 * 4) = 0;
        FUN_00408194(DAT_00686aac + iVar6 * 4,0);
        if (local_11 != '\0') {
          if (local_10 == 6) {
            FUN_005718c0();
          }
          FUN_0050bc1c(uVar4,&local_18);
          FUN_00408194(DAT_00686aac + iVar6 * 4,local_18);
          uVar5 = FUN_0060f71c(&LAB_0060f23c,1);
          *(undefined4 *)(DAT_00686aa8 + iVar6 * 4) = uVar5;
          cVar2 = FUN_0060f858(*(undefined4 *)(DAT_00686aa8 + iVar6 * 4),uVar4);
          if (cVar2 == '\0') goto LAB_00571e35;
        }
        FUN_00405fdc(uVar4);
        local_10 = local_10 + 1;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_9 = 1;
  }
LAB_00571e35:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00571e52;
  puStack_2c = (undefined1 *)0x571e4a;
  thunk_FUN_004072d8(&local_18,uStack_30,puVar1);
  return;
}
