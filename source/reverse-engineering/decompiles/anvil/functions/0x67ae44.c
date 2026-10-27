// rea decompile_all
// name: entry
// address: 0x67ae44
// body: available
// range: 0x67ae44-0x67b066 inclusive
// range: 0x67b08f-0x67b0ae inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67ae76 (push 0x67b0af followed by fs-segment stack chaining); handler 0x67b0af lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67aec8 (push 0x67b067 followed by fs-segment stack chaining); handler 0x67b067 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void entry(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  wchar_t *pwVar7;
  undefined *puVar8;
  wchar_t *pwVar9;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [5];

  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18[0] = 0;
  puStack_34 = (undefined1 *)0x67ae65;
  FUN_0040bff8(&DAT_0066b59c);
  puVar1 = PTR_DAT_0068917c;
  puStack_38 = &LAB_0067b0af;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  *(ushort *)PTR_DAT_00688e40 = *(ushort *)PTR_DAT_00688e40 | 4;
  *(ushort *)PTR_DAT_00688e40 = *(ushort *)PTR_DAT_00688e40 | 0x10;
  puStack_40 = (undefined1 *)0x67ae90;
  puStack_34 = &stack0xfffffffc;
  FUN_00560d8c();
  puStack_40 = (undefined1 *)0x67ae9c;
  uVar3 = FUN_00405fac(&DAT_0056103c,1);
  *(undefined4 *)PTR_DAT_00688a24 = uVar3;
  iVar4 = *(int *)puVar1;
  *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)PTR_DAT_00688a24;
  *(code **)(iVar4 + 0xf0) = FUN_00561850;
  uVar6 = 1;
  puStack_44 = &LAB_0067b067;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_0041f2fc(L"YYLOG_TRACE",local_18);
  FUN_0040891c(local_18[0],&DAT_0067b0f0);
  *PTR_DAT_00688d80 = uVar6;
  iVar4 = FUN_004046d0();
  iVar4 = iVar4 + -1;
  uVar6 = iVar4 == 0;
  if (0 < iVar4) {
    iVar5 = 1;
    do {
      FUN_00404730(iVar5,&local_1c);
      FUN_0040891c(local_1c,L"--YYTrace");
      if ((bool)uVar6) {
        *PTR_DAT_00688d80 = 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
      uVar6 = iVar4 == 0;
    } while (!(bool)uVar6);
  }
  timeBeginPeriod(1);
  pwVar9 = L"               GameMaker Runner v8.1.";
  FUN_0041636c(0x8d,&local_24);
  uVar3 = local_24;
  puVar8 = &DAT_0067b234;
  pwVar7 = L"11549";
  FUN_0040875c(&local_20,4);
  FUN_00561704(local_20);
  FUN_00561704(
              L"**************************************************************************************"
              );
  FUN_004eb828(*(undefined4 *)puVar1);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_00626a30,PTR_DAT_006888cc,pwVar7,puVar8);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_0058fdb0,PTR_DAT_006895ec);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_005b9478,PTR_DAT_00688990);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_0059fe70,PTR_DAT_00689108);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_005f5250,PTR_DAT_0068901c);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_006255ec,PTR_DAT_00689390);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_005b505c,PTR_DAT_00689250);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_005708a8,PTR_DAT_00688f78);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_00610ab4,PTR_DAT_00689328);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_006252bc,PTR_DAT_0068962c);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_0066b3d4,PTR_DAT_006892a4);
  FUN_004eb840(*(undefined4 *)puVar1,&PTR_LAB_004f8af0,PTR_DAT_0068950c);
  FUN_004eb990(*(undefined4 *)puVar1);
  *in_FS_OFFSET = pwVar7;
  FUN_00560dc0(0,pwVar7,uVar3);
  puVar2 = puStack_44;
  *in_FS_OFFSET = pwVar9;
  puStack_44 = &DAT_0067b0b6;
  uStack_48 = 0x67b0ae;
  thunk_FUN_004072fc(&local_24,4,puVar2);
  return;
}
