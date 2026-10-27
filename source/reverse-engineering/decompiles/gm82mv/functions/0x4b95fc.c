// rea decompile_all
// name: FUN_004b95fc
// address: 0x4b95fc
// body: available
// range: 0x4b95fc-0x4b9842 inclusive
// range: 0x4b984a-0x4b989e inclusive
// range: 0x4b9918-0x4b991c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b9633 (push 0x4b9911 followed by fs-segment stack chaining); handler 0x4b9911 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b964b (push 0x4b989f followed by fs-segment stack chaining); handler 0x4b989f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b97f8 (push 0x4b9843 followed by fs-segment stack chaining); handler 0x4b9843 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b95fc(char param_1)

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
  if ((DAT_0068f26c == (undefined4 *)0x0) || (*(char *)((int)DAT_0068f26c + 5) != '\0')) {
    return;
  }
  puStack_24 = &LAB_004b9911;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_28;
  DAT_0068f298 = DAT_0068f26c;
  puStack_30 = &LAB_004b989f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_34;
  *(undefined1 *)((int)DAT_0068f26c + 5) = 1;
  *(char *)(DAT_0068f26c + 8) = param_1;
  FUN_004b8468(DAT_0068f26c,DAT_0068f274);
  if (DAT_0068f288 == '\x02') {
    piVar7 = (int *)FUN_0040621c(DAT_0068f26c,&LAB_004ad37c);
    (**(code **)(*piVar7 + 0x34))();
    *(bool *)(piVar7 + 0x1d) = piVar7[5] == 0;
  }
  if (DAT_0068f26c[5] == 0) {
LAB_004b96d4:
    local_18 = DAT_0068f26c[3];
    local_14 = DAT_0068f26c[4];
  }
  else {
    cVar3 = FUN_004061f8(DAT_0068f26c[5],&PTR_FUN_004b0df8);
    if (cVar3 == '\0') goto LAB_004b96d4;
    local_18 = DAT_0068f26c[6];
    local_14 = DAT_0068f26c[7];
  }
  puStack_3c = (undefined1 *)0x4b96eb;
  cVar3 = FUN_004b9588();
  if (cVar3 != '\0') {
    if ((DAT_0068f288 == '\x02') && ((char)piVar7[0x1d] != '\0')) {
LAB_004b9713:
      if (param_1 != '\0') {
        bVar4 = 1;
        goto LAB_004b971f;
      }
    }
    else if (DAT_0068f288 != '\0') {
      cVar3 = FUN_004b8e9c(1);
      if (cVar3 != '\0') goto LAB_004b9713;
    }
  }
  bVar4 = 0;
LAB_004b971f:
  if (DAT_0068f288 == '\x02') {
    if ((bVar4 != 0) && ((char)piVar7[0x1d] != '\0')) {
      iVar5 = FUN_004df914(piVar7[0x10],1);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x290) == piVar7[0x10])) {
        FUN_004e4900(iVar5,0);
      }
      puStack_3c = (undefined1 *)0x4b976e;
      FUN_004bcb48(DAT_0068f268,0xb03a,0);
    }
  }
  else if (DAT_0068f28c == 0) {
    puStack_3c = (undefined1 *)0x4b9790;
    SetCursor(DAT_0068f280);
  }
  else {
    FUN_004c70e4(DAT_0068f28c);
  }
  puVar2 = puStack_2c;
  DAT_0068f268 = 0;
  DAT_0068f26c = (undefined4 *)0x0;
  if ((DAT_0068f298 != (undefined4 *)0x0) && (DAT_0068f298[5] != 0)) {
    uVar6 = 3;
    if (bVar4 == 0) {
      uVar6 = 4;
      DAT_0068f298[3] = 0;
      DAT_0068f298[4] = 0;
    }
    puVar1 = DAT_0068f298;
    puStack_3c = &LAB_004b9843;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_40;
    FUN_004b8d68(DAT_0068f298[2],uVar6,DAT_0068f298,DAT_0068f298 + 3,DAT_0068f298[5]);
    *in_FS_OFFSET = uStack_40;
    if (DAT_0068f298 == (undefined4 *)0x0) {
      DAT_0068f298 = puVar1;
    }
    return;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004b98a6;
  puStack_30 = (undefined1 *)0x4b9861;
  FUN_00405fdc(DAT_0068f294,uStack_34,puVar2);
  DAT_0068f294 = 0;
  if (DAT_0068f298 != (undefined4 *)0x0) {
    *(undefined1 *)((int)DAT_0068f298 + 5) = 0;
    puStack_30 = (undefined1 *)local_14;
    uStack_34 = (uint)bVar4;
    (**(code **)*DAT_0068f298)(DAT_0068f298,DAT_0068f298[5],local_18);
  }
  DAT_0068f26c = (undefined4 *)0x0;
  return;
}
