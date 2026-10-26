// rea decompile_all
// name: FUN_0041b664
// address: 0x41b664
// body: available
// range: 0x41b664-0x41b6fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41b675 (push 0x41b6fb followed by fs-segment stack chaining); handler 0x41b6fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b664(void)

{
  undefined1 *puVar1;
  LCID LVar2;
  CALID Calendar;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  CALID Calendar_00;
  CALTYPE CVar5;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_0041b6fb;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar3 = &local_8;
  LVar2 = GetThreadLocale();
  FUN_0041b284(LVar2,0x100b,&DAT_0041b714,puVar3);
  Calendar = FUN_0041663c(local_8,1);
  if (Calendar - 3 < 3) {
    CVar5 = 4;
    Calendar_00 = Calendar;
    LVar2 = GetThreadLocale();
    EnumCalendarInfoW((CALINFO_ENUMPROCW)&LAB_0041b5b0,LVar2,Calendar_00,CVar5);
    iVar4 = 7;
    puVar3 = &DAT_0068cd78;
    do {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    CVar5 = 3;
    LVar2 = GetThreadLocale();
    EnumCalendarInfoW((CALINFO_ENUMPROCW)&LAB_0041b5ec,LVar2,Calendar,CVar5);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041b702;
  puStack_14 = (undefined1 *)0x41b6fa;
  thunk_FUN_004072d8(&local_8,uStack_18,puVar1);
  return;
}
