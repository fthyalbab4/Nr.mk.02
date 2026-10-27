// rea decompile_all
// name: FUN_0072c894
// address: 0x72c894
// body: available
// range: 0x72c894-0x72ca87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072c894(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  HDC pHVar6;
  BITMAPINFO *lpbmi;
  int SrcWidth;
  int DestHeight;
  int DestWidth;
  int *piVar7;
  int xDest;
  int yDest;
  int xSrc;
  int ySrc;
  void *lpBits;
  undefined1 *puVar8;
  UINT iUsage;
  DWORD rop;
  undefined1 local_18 [16];
  int *local_8;

  puVar8 = &stack0xfffffffc;
  local_8 = param_1;
  cVar1 = FUN_00405c98(param_2,&PTR_FUN_00724024);
  if (cVar1 == '\0') {
    cVar1 = FUN_00405c98(param_2,&PTR_FUN_004587d4);
    if ((cVar1 != '\0') && (cVar1 = FUN_0072d148(local_8), cVar1 != '\0')) {
      uVar2 = (**(code **)(*local_8 + 0x24))();
      uVar3 = (**(code **)(*local_8 + 0x30))();
      (**(code **)(*param_2 + 0x6c))(param_2,uVar3,uVar2);
      cVar1 = FUN_0072cda8(local_8);
      if (cVar1 == '\x02') {
        FUN_00463dc0(param_2,7);
        FUN_00462dd0(param_2,1);
        iVar4 = FUN_00462a64(param_2);
        FUN_0045bc24(*(undefined4 *)(iVar4 + 0x48),0);
        uVar2 = (**(code **)(*local_8 + 0x24))();
        puVar8 = local_18;
        uVar3 = (**(code **)(*local_8 + 0x30))();
        FUN_00438c60(0,0,uVar3,puVar8,uVar2);
        puVar8 = local_18;
        piVar5 = (int *)FUN_00462a64(param_2);
        (**(code **)(*piVar5 + 0x4c))(piVar5,puVar8);
      }
      else {
        uVar2 = FUN_0072c7e4();
        FUN_00463dc0(param_2,uVar2,puVar8);
        FUN_00462dd0(param_2,0);
      }
      iVar4 = (**(code **)(*local_8 + 0x28))();
      if (iVar4 != 0) {
        (**(code **)(*local_8 + 0x28))();
        uVar2 = FUN_00461ed4();
        (**(code **)(*param_2 + 0x3c))(param_2,uVar2);
      }
      cVar1 = FUN_0072cda8(local_8);
      if (cVar1 == '\x01') {
        uVar2 = FUN_007272ec(local_8[0x4e],&PTR_LAB_00725b10);
        uVar2 = FUN_00405cbc(uVar2,&PTR_LAB_00725b10);
        uVar2 = FUN_00728498(uVar2);
        FUN_00463f28(param_2,uVar2);
        (**(code **)(*param_2 + 0x40))(param_2,1);
        iVar4 = 3;
        FUN_00462a64(param_2);
        pHVar6 = (HDC)FUN_0045ce2c();
        SetStretchBltMode(pHVar6,iVar4);
        rop = 0xcc0020;
        iUsage = 0;
        iVar4 = FUN_0072b6bc(local_8);
        lpbmi = (BITMAPINFO *)(iVar4 + 0x21);
        iVar4 = FUN_0072b6bc(local_8);
        lpBits = *(void **)(iVar4 + 0x450);
        iVar4 = (**(code **)(*local_8 + 0x24))();
        SrcWidth = (**(code **)(*local_8 + 0x30))();
        ySrc = 0;
        xSrc = 0;
        DestHeight = (**(code **)(*local_8 + 0x24))();
        DestWidth = (**(code **)(*local_8 + 0x30))();
        yDest = 0;
        xDest = 0;
        FUN_00462a64(param_2);
        pHVar6 = (HDC)FUN_0045ce2c();
        StretchDIBits(pHVar6,xDest,yDest,DestWidth,DestHeight,xSrc,ySrc,SrcWidth,iVar4,lpBits,lpbmi,
                      iUsage,rop);
        return;
      }
      piVar5 = local_8;
      piVar7 = (int *)FUN_00462a64(param_2);
      (**(code **)(*piVar7 + 0x3c))(piVar7,0,0,piVar5);
      return;
    }
    FUN_0043c620(local_8,param_2);
  }
  else {
    FUN_0072cc1c(param_2,local_8);
  }
  return;
}
