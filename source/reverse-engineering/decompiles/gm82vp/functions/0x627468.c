// rea decompile_all
// name: FUN_00627468
// address: 0x627468
// body: available
// range: 0x627468-0x6276da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x627489 (push 0x6276db followed by fs-segment stack chaining); handler 0x6276db lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00627468(undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  float10 in_ST0;
  float10 fVar8;
  undefined4 local_40;
  undefined2 uVar9;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  double local_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_8 = 0;
  puStack_30 = &LAB_006276db;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar3 = FUN_0050bbe0(param_1);
  if (iVar3 == 0x32a) {
    uVar6 = DAT_00688704 ^ 0xb0;
    DAT_0085b43c = FUN_0050bbe0(param_1);
    DAT_0085b440 = (int)DAT_0085b43c >> 0x1f;
    uVar1 = FUN_0050bcd0(param_1);
    *PTR_DAT_00688de8 = uVar1;
    local_40 = 0x6274f2;
    DAT_0085b43c = FUN_00409748(DAT_0085b43c,DAT_0085b440);
    DAT_0085b440 = extraout_EDX;
    uVar4 = FUN_0050bbe0(param_1);
    bVar7 = CARRY4(uVar4,DAT_0085b43c);
    DAT_0085b43c = uVar4 + DAT_0085b43c;
    DAT_0085b440 = ((int)uVar4 >> 0x1f) + DAT_0085b440 + (uint)bVar7;
    cVar2 = FUN_0056d3a8(param_1);
    if (cVar2 == '\0') {
      uVar9 = 0x7536;
      uStack_36 = 0x62;
      FUN_004a17e4(L"Error: Error in resource data.");
    }
    else {
      FUN_006257f4(1,L"Reading data");
      FUN_00625890(*PTR_DAT_00688de8);
      FUN_00419550();
      local_14 = (double)in_ST0;
      fVar8 = (float10)local_14;
      DAT_0085b448 = FUN_004048b8();
      DAT_0085b44c = (int)DAT_0085b448 >> 0x1f;
      FUN_00404814();
      local_14 = (double)fVar8;
      DAT_0085b448 = FUN_00409748(DAT_0085b448,DAT_0085b44c);
      DAT_0085b44c = extraout_EDX_00;
      FUN_0050bc1c(param_1,&local_8);
      local_c = FUN_0050be9c(param_1);
      FUN_0050d110(&local_1c);
      uVar9 = (undefined2)local_1c;
      uStack_36 = (undefined2)((uint)local_1c >> 0x10);
      local_40 = local_8;
      FUN_0040875c(&local_18,3);
      FUN_0043d470(local_c,local_18);
      FUN_00405fdc(local_c);
      local_14 = local_14 * 86400.0;
      uVar4 = FUN_004048b8();
      bVar7 = CARRY4(uVar4,DAT_0085b448);
      DAT_0085b448 = uVar4 + DAT_0085b448;
      DAT_0085b44c = ((int)uVar4 >> 0x1f) + DAT_0085b44c + (uint)bVar7;
      cVar2 = FUN_00531118();
      if (cVar2 == '\0') {
        FUN_004a17e4(L"Error: Failed to initialize D3DX.");
      }
      else {
        uVar4 = uVar6 * 0xc + 0x1d;
        cVar2 = FUN_00626d4c(param_1);
        if (((cVar2 != '\0') && (*PTR_DAT_00689498 == '\0')) &&
           (DAT_0085b440 != 0 || DAT_0085b43c != 0)) {
          uVar6 = DAT_0085b448 - DAT_0085b43c;
          iVar3 = (DAT_0085b44c - DAT_0085b440) - (uint)(DAT_0085b448 < DAT_0085b43c);
          if (iVar3 < 0) {
            bVar7 = uVar6 != 0;
            uVar6 = -uVar6;
            iVar3 = -(iVar3 + (uint)bVar7);
          }
          iVar5 = (int)uVar4 >> 0x1f;
          if (iVar5 == iVar3) {
            if (uVar6 <= uVar4) goto LAB_006276b8;
          }
          else if (iVar3 <= iVar5) goto LAB_006276b8;
          FUN_004a17e4(L"LITE .exe has expired",uVar6);
        }
      }
    }
  }
  else {
    uVar9 = 0x74a6;
    uStack_36 = 0x62;
    FUN_004a17e4(L"Error: Wrong version number.");
  }
LAB_006276b8:
  *in_FS_OFFSET = local_40;
  thunk_FUN_004072fc(&local_1c,2,CONCAT22(uStack_36,uVar9),0x76e2);
  thunk_FUN_004072d8(&local_8);
  return;
}
