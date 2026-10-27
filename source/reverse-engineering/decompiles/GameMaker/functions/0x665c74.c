// rea decompile_all
// name: FUN_00665c74
// address: 0x665c74
// body: available
// range: 0x665c74-0x665e2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00665c74(int *param_1)

{
  char cVar1;
  int iVar2;
  HDC hdc;
  LPCWSTR lpchText;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  int aiStackY_180c [1517];
  LPRECT lprc;
  UINT format;
  int iStack_44;
  int iStack_40;
  byte local_3c;
  undefined4 uStack_38;
  LPRECT ptStack_34;
  int iStack_30;
  int aiStack_2c [7];

  bVar7 = 0;
  if ((param_1[0x6d] != 0) && (*(char *)(param_1[0x6d] + 0x6c) != '\0')) {
    local_3c = *(byte *)(*(int *)(param_1[0x19] + 0x10) + 0x1d);
    FUN_0045b498(param_1[0x19],local_3c | 1);
  }
  FUN_00679fbc(param_1);
  (**(code **)(*param_1 + 0xd0))(param_1,&iStack_44);
  uVar4 = param_1[0x83];
  cVar1 = (**(code **)(*param_1 + 0xe4))();
  if (cVar1 == '\0') {
    if (0x10 < iStack_40) {
      uVar4 = iStack_40 + 4;
    }
  }
  else {
    uVar4 = (param_1[0x83] / 3) * 2;
  }
  if (param_1[0x6d] != 0) {
    if (iStack_44 < 0x11) {
      iVar6 = 0x18;
    }
    else {
      iVar6 = iStack_44 + 6;
    }
    piVar5 = param_1 + (uint)bVar7 * -2 + 0x78;
    iStack_30 = param_1[0x77];
    aiStack_2c[(uint)bVar7 * -2] = *piVar5;
    aiStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = piVar5[(uint)bVar7 * -2 + 1];
    (aiStack_2c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (piVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    iVar3 = (int)uVar4 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
    }
    iVar2 = param_1[0x7a] >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((param_1[0x7a] & 1U) != 0);
    }
    FUN_0040c268(&iStack_30,0x18 - param_1[0x77],(iVar3 - iVar2) + -1);
    piVar5 = param_1 + (uint)bVar7 * -2 + 0x78;
    param_1[0x77] = iStack_30;
    *piVar5 = aiStack_2c[(uint)bVar7 * -2];
    piVar5[(uint)bVar7 * -2 + 1] = aiStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    (piVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (aiStack_2c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    FUN_0040c114(0,0,0,aiStack_2c + 3,0);
    piVar5 = param_1 + (uint)bVar7 * -2 + 0x80;
    param_1[0x7f] = aiStack_2c[3];
    *piVar5 = aiStack_2c[(uint)bVar7 * -2 + 4];
    piVar5[(uint)bVar7 * -2 + 1] = aiStack_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5];
    (piVar5 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
         (aiStack_2c + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1];
    if (*(short *)(param_1[0x6d] + 0x4c) == 0) {
      iVar6 = param_1[0x79] + param_1[0x77];
    }
    else {
      hdc = (HDC)FUN_0045ce2c(param_1[0x6a]);
      uStack_38 = *(undefined4 *)(param_1[0x6d] + 0x58);
      lprc = (LPRECT)(param_1 + 0x7f);
      format = 0x400;
      iVar3 = -1;
      ptStack_34 = lprc;
      lpchText = (LPCWSTR)FUN_00407f44(uStack_38);
      DrawTextW(hdc,lpchText,iVar3,lprc,format);
      param_1[0x80] = param_1[0x78];
      param_1[0x82] = param_1[0x7a];
      iVar6 = param_1[0x79] + param_1[0x81] + iVar6 + param_1[0x76];
    }
    (**(code **)(*param_1 + 0x98))(param_1,param_1[0x10],param_1[0x11],uVar4,iVar6);
  }
  return;
}
