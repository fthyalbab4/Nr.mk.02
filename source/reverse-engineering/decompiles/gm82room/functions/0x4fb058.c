// rea decompile_all
// name: FUN_004fb058
// address: 0x4fb058
// body: available
// range: 0x4fb058-0x4fb182 inclusive
// range: 0x4fb18a-0x4fb22b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fb137 (push 0x4fb183 followed by fs-segment stack chaining); handler 0x4fb183 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb058(int param_1,undefined4 param_2,int *param_3,char param_4,char param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  HDC pHVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  HIMAGELIST p_Var8;
  undefined4 *in_FS_OFFSET;
  int iVar9;
  int iVar10;
  RECT *pRVar11;
  int iVar12;
  BP_BUFFERFORMAT dwFormat;
  COLORREF CVar13;
  BP_PAINTPARAMS *pPaintParams;
  COLORREF CVar14;
  HDC *phdc;
  UINT UVar15;
  RECT local_30;
  undefined1 local_20 [12];
  HPAINTBUFFER local_14;
  HDC local_10;
  undefined1 local_9;
  undefined4 local_8;

  if (*(int *)(param_1 + 4) != 0) {
    local_8 = param_2;
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
      if (iVar2 != 0) {
        iVar2 = FUN_004faa84(param_1,param_5);
        if (*(char *)(param_1 + 0x31) == '\0') {
          if ((param_4 == '\0') && (param_5 != '\x03')) {
            UVar15 = 0;
            CVar14 = 0x1fffffff;
            CVar13 = FUN_0045b0f4(0xff00000f);
            iVar12 = 0;
            iVar10 = 0;
            iVar3 = param_3[1];
            iVar9 = *param_3;
            pHVar5 = (HDC)FUN_0045d4ec(local_8);
            p_Var8 = (HIMAGELIST)FUN_004d3a48(*(undefined4 *)(param_1 + 8));
            ImageList_DrawEx(p_Var8,iVar2,pHVar5,iVar9,iVar3,iVar10,iVar12,CVar13,CVar14,UVar15);
          }
          else {
            UVar15 = 1;
            CVar14 = 0x1fffffff;
            CVar13 = 0x1fffffff;
            iVar12 = 0;
            iVar10 = 0;
            iVar3 = param_3[1];
            iVar9 = *param_3;
            pHVar5 = (HDC)FUN_0045d4ec(local_8);
            p_Var8 = (HIMAGELIST)FUN_004d3a48(*(undefined4 *)(param_1 + 8));
            ImageList_DrawEx(p_Var8,iVar2,pHVar5,iVar9,iVar3,iVar10,iVar12,CVar13,CVar14,UVar15);
          }
        }
        else {
          local_30.left = *param_3;
          local_30.top = param_3[1];
          iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
          local_30.right = iVar3 / (int)(uint)*(byte *)(param_1 + 0x20) + local_30.left;
          local_30.bottom = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
          local_30.bottom = local_30.bottom + local_30.top;
          if ((byte)(param_5 - 1U) == 0) {
            local_9 = 5;
            uVar4 = 0;
          }
          else {
            iVar3 = (byte)(param_5 - 1U) - 1;
            bVar1 = (byte)iVar3;
            uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),bVar1 - 2);
            if (bVar1 < 2) {
              local_9 = 4;
            }
            else {
              local_9 = 2;
            }
          }
          uVar4 = FUN_004d08e8(uVar4);
          FUN_004d0db8(uVar4,local_9,local_20);
          if (*(char *)(param_1 + 0x21) != '\0') {
            phdc = &local_10;
            pPaintParams = (BP_PAINTPARAMS *)0x0;
            dwFormat = BPBF_TOPDOWNDIB;
            pRVar11 = &local_30;
            pHVar5 = (HDC)FUN_0045d4ec(local_8);
            local_14 = BeginBufferedPaint(pHVar5,pRVar11,dwFormat,pPaintParams,phdc);
            uVar4 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffffb8;
            pRVar11 = &local_30;
            uVar6 = FUN_004d3a48(*(undefined4 *)(param_1 + 8));
            uVar7 = FUN_004d08e8();
            FUN_004d0c60(uVar7,local_10,local_20,iVar2,uVar6,pRVar11);
            BufferedPaintSetAlpha(local_14,&local_30,0xff);
            *in_FS_OFFSET = uVar4;
            EndBufferedPaint(local_14,-1);
            return;
          }
          FUN_004d3a48(*(undefined4 *)(param_1 + 8));
          uVar4 = FUN_0045d4ec(local_8);
          uVar6 = FUN_004d08e8();
          FUN_004d0c60(uVar6,uVar4,local_20);
        }
      }
    }
  }
  return;
}
