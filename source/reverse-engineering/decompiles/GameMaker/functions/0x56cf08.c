// rea decompile_all
// name: FUN_0056cf08
// address: 0x56cf08
// body: available
// range: 0x56cf08-0x56d0ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056cf08(uint *param_1,int param_2,uint param_3,char param_4,int param_5)

{
  int iVar1;
  char cVar2;
  HPEN pHVar3;
  int iVar4;
  uint csz;
  HDC hdc;
  POINT *apt;
  DWORD *asz;
  LOGBRUSH local_30;
  int local_24;
  LONG local_20;
  LONG local_1c;
  int local_18;
  POINT *local_14;
  uint local_10;
  int local_c;
  uint local_8;

  iVar4 = *(int *)(*(int *)(*(int *)(param_5 + 0x1c) + -4) + 0x270);
  if (*param_1 != 0) {
    local_8 = param_3;
    FUN_0045b9a4(*(undefined4 *)(iVar4 + 0x44),
                 *(undefined4 *)(*(int *)(*(int *)(param_5 + 0x1c) + -4) + 0x2b0));
    if (param_4 == '\0') {
      FUN_0045b850(*(undefined4 *)(iVar4 + 0x44),*(undefined4 *)(param_5 + 8));
    }
    else {
      FUN_0045b850(*(undefined4 *)(iVar4 + 0x44),*(undefined4 *)(param_5 + 0xc));
    }
    iVar1 = *(int *)(*(int *)(iVar4 + 0x44) + 0x10);
    if (1 < *(int *)(iVar1 + 0x18)) {
      local_30.lbStyle = 0;
      local_30.lbColor = *(COLORREF *)(iVar1 + 0x14);
      local_30.lbHatch = 0;
      pHVar3 = ExtCreatePen(0x12200,*(DWORD *)(*(int *)(*(int *)(iVar4 + 0x44) + 0x10) + 0x18),
                            &local_30,0,(DWORD *)0x0);
      FUN_0045b930(*(undefined4 *)(iVar4 + 0x44),pHVar3);
    }
    local_14 = *(POINT **)(*(int *)(param_5 + 0x1c) + -8);
    local_c = (*(code *)param_1[10])(param_1[0xb],param_2);
    local_c = local_c + *(int *)(*(int *)(param_5 + 0x14) + local_8 * 4) + (*param_1 >> 1);
    cVar2 = FUN_00405d08(*(undefined4 *)(*(int *)(param_5 + 0x1c) + -4));
    if ((cVar2 != '\0') && (local_8 == 0)) {
      local_c = local_c + 1;
    }
    local_1c = *(LONG *)(*(int *)(param_5 + 0x14) + (local_8 ^ 1) * 4);
    local_20 = *(LONG *)(*(int *)(param_5 + 0x14) + ((local_8 ^ 1) + 2) * 4);
    local_18 = *(int *)(*(int *)(param_5 + 0x14) + (local_8 + 2) * 4) + *param_1;
    local_24 = *(int *)(*(int *)(param_5 + 0x1c) + -0xc) * 4;
    local_10 = 0;
    do {
      (&local_14->x)[local_10 + local_8] = local_c;
      (&local_14->x)[(local_8 ^ 1) + local_10] = local_1c;
      (&local_14[1].x)[local_10 + local_8] = local_c;
      (&local_14[1].x)[local_10 + (local_8 ^ 1)] = local_20;
      local_10 = local_10 + 4;
      do {
        param_2 = param_2 + 1;
        iVar4 = (*(code *)param_1[10])(param_1[0xb],param_2);
        if (0 < (int)(iVar4 + *param_1)) break;
      } while (param_2 <= (int)param_1[4]);
      local_c = local_c + iVar4 + *param_1;
    } while (((local_c <= local_18) && (param_2 <= (int)param_1[4])) && ((int)local_10 <= local_24))
    ;
    csz = local_10 >> 2;
    asz = *(DWORD **)(*(int *)(param_5 + 0x1c) + -0x10);
    apt = local_14;
    hdc = (HDC)FUN_0045ce2c(*(undefined4 *)(*(int *)(*(int *)(param_5 + 0x1c) + -4) + 0x270));
    PolyPolyline(hdc,apt,asz,csz);
  }
  return;
}
