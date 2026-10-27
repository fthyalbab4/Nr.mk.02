// rea decompile_all
// name: FUN_004ec644
// address: 0x4ec644
// body: available
// range: 0x4ec644-0x4ec88a inclusive
// range: 0x4ec892-0x4ec8e6 inclusive
// range: 0x4ec960-0x4ec964 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec67b (push 0x4ec959 followed by fs-segment stack chaining); handler 0x4ec959 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec693 (push 0x4ec8e7 followed by fs-segment stack chaining); handler 0x4ec8e7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec840 (push 0x4ec88b followed by fs-segment stack chaining); handler 0x4ec88b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec644(char param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *in_FS_OFFSET;
  uint uStack_40;
  undefined1 *puStack_3c;
  uint uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  uint uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  undefined4 local_14;

  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  piVar7 = (int *)0x0;
  if ((DAT_00788270 == (undefined4 *)0x0) || (*(char *)((int)DAT_00788270 + 5) != '\0')) {
    return;
  }
  puStack_24 = &LAB_004ec959;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_28;
  DAT_0078829c = DAT_00788270;
  puStack_30 = &LAB_004ec8e7;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_34;
  *(undefined1 *)((int)DAT_00788270 + 5) = 1;
  *(char *)(DAT_00788270 + 8) = param_1;
  FUN_004eb4ac(DAT_00788270,DAT_00788278);
  if (DAT_0078828c == '\x02') {
    piVar7 = (int *)FUN_00405cbc(DAT_00788270,&PTR_FUN_004e03c0);
    (**(code **)(*piVar7 + 0x34))();
    *(bool *)(piVar7 + 0x1d) = piVar7[5] == 0;
  }
  if (DAT_00788270[5] == 0) {
LAB_004ec71c:
    local_18 = DAT_00788270[3];
    local_14 = DAT_00788270[4];
  }
  else {
    cVar3 = FUN_00405c98(DAT_00788270[5],&PTR_FUN_004e3e3c);
    if (cVar3 == '\0') goto LAB_004ec71c;
    local_18 = DAT_00788270[6];
    local_14 = DAT_00788270[7];
  }
  puStack_3c = (undefined1 *)0x4ec733;
  cVar3 = FUN_004ec5d0();
  if (cVar3 != '\0') {
    if ((DAT_0078828c == '\x02') && ((char)piVar7[0x1d] != '\0')) {
LAB_004ec75b:
      if (param_1 != '\0') {
        bVar4 = 1;
        goto LAB_004ec767;
      }
    }
    else if (DAT_0078828c != '\0') {
      cVar3 = FUN_004ebee4(1);
      if (cVar3 != '\0') goto LAB_004ec75b;
    }
  }
  bVar4 = 0;
LAB_004ec767:
  if (DAT_0078828c == '\x02') {
    if ((bVar4 != 0) && ((char)piVar7[0x1d] != '\0')) {
      iVar5 = FUN_00513780(piVar7[0x10],1);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x290) == piVar7[0x10])) {
        FUN_00518874(iVar5,0);
      }
      puStack_3c = (undefined1 *)0x4ec7b6;
      FUN_004efb90(DAT_0078826c,0xb03a,0);
    }
  }
  else if (DAT_00788290 == 0) {
    puStack_3c = (undefined1 *)0x4ec7d8;
    SetCursor(DAT_00788284);
  }
  else {
    FUN_004fa1f8(DAT_00788290);
  }
  puVar2 = puStack_2c;
  DAT_0078826c = 0;
  DAT_00788270 = (undefined4 *)0x0;
  if ((DAT_0078829c != (undefined4 *)0x0) && (DAT_0078829c[5] != 0)) {
    uVar6 = 3;
    if (bVar4 == 0) {
      uVar6 = 4;
      DAT_0078829c[3] = 0;
      DAT_0078829c[4] = 0;
    }
    puVar1 = DAT_0078829c;
    puStack_3c = &LAB_004ec88b;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_40;
    FUN_004ebdb0(DAT_0078829c[2],uVar6,DAT_0078829c,DAT_0078829c + 3,DAT_0078829c[5]);
    *in_FS_OFFSET = uStack_40;
    if (DAT_0078829c == (undefined4 *)0x0) {
      DAT_0078829c = puVar1;
    }
    return;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004ec8ee;
  puStack_30 = (undefined1 *)0x4ec8a9;
  FUN_00405a7c(DAT_00788298,uStack_34,puVar2);
  DAT_00788298 = 0;
  if (DAT_0078829c != (undefined4 *)0x0) {
    *(undefined1 *)((int)DAT_0078829c + 5) = 0;
    puStack_30 = (undefined1 *)local_14;
    uStack_34 = (uint)bVar4;
    (**(code **)*DAT_0078829c)(DAT_0078829c,DAT_0078829c[5],local_18);
  }
  DAT_00788270 = (undefined4 *)0x0;
  return;
}
