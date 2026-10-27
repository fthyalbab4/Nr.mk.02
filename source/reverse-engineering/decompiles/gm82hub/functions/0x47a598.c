// rea decompile_all
// name: FUN_0047a598
// address: 0x47a598
// body: available
// range: 0x47a598-0x47a9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47a5ba (push 0x47a9e4 followed by fs-segment stack chaining); handler 0x47a9e4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a598(int param_1,ushort *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  undefined4 uVar5;
  HWND pHVar6;
  BOOL BVar7;
  int iVar8;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  UINT *in_FS_OFFSET;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  UINT local_58;
  UINT local_54;
  uint local_50;
  undefined4 in_stack_ffffffb4;
  undefined4 in_stack_ffffffb8;
  undefined4 in_stack_ffffffbc;
  UINT UVar9;
  UINT UVar10;
  int in_stack_ffffffc4;
  UINT UVar11;
  UINT in_stack_ffffffc8;
  HWND pHVar12;
  UINT in_stack_ffffffd0;
  WPARAM wParam;
  WPARAM lParam;
  uint uVar13;
  UINT UStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;

  puStack_1c = &stack0xfffffffc;
  iVar8 = 0xc;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puStack_20 = &LAB_0047a9e4;
  UStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_24;
  FUN_004c3300(param_1,param_2);
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    if (*(byte *)(param_1 + 0x2e6) < 2) {
      FUN_004bb658(param_1,&stack0xffffffc8);
      FUN_00408194(param_1 + 0x2e0,in_stack_ffffffc8);
    }
    else {
      DVar4 = GetTickCount();
      if (*(uint *)(param_1 + 0x304) <= DVar4 - *(int *)(param_1 + 0x2dc)) {
        FUN_00408194(param_1 + 0x2e0,0);
      }
      DVar4 = GetTickCount();
      *(DWORD *)(param_1 + 0x2dc) = DVar4;
    }
    uVar1 = *param_2;
    if (uVar1 == 8) {
      cVar3 = FUN_0047a4b0(&stack0xffffffec,&stack0xffffffe8);
      if (cVar3 == '\0') {
        if (*(byte *)(param_1 + 0x2e6) < 2) {
          FUN_004bb658(param_1,&stack0xffffffc4,&stack0xfffffffc);
          iVar8 = 0;
          if (in_stack_ffffffc4 != 0) {
            iVar8 = *(int *)(in_stack_ffffffc4 + -4);
          }
          bVar2 = 0 < iVar8;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          FUN_004bb658(param_1,&stack0xfffffff0);
          while (cVar3 = FUN_0041d068(unaff_EBX,unaff_ESI), cVar3 == '\x02') {
            unaff_ESI = unaff_ESI + -1;
          }
          FUN_00408984(unaff_EBX,1,unaff_ESI + -1);
          lParam = 0;
          wParam = 0xffffffff;
          pHVar12 = (HWND)0x14e;
          pHVar6 = (HWND)FUN_004c45dc(param_1);
          SendMessageW(pHVar6,(UINT)pHVar12,wParam,lParam);
          FUN_00408984(unaff_EBX,unaff_EDI + 1,0x7fffffff);
          FUN_00408678(&stack0xffffffbc,local_c,in_stack_ffffffb8);
          FUN_004bb690(param_1,in_stack_ffffffbc);
          uVar13 = unaff_ESI - 1U & 0xffff | (unaff_ESI - 1U) * 0x10000;
          pHVar12 = (HWND)0x0;
          in_stack_ffffffc8 = 0x142;
          pHVar6 = (HWND)FUN_004c45dc(param_1);
          SendMessageW(pHVar6,in_stack_ffffffc8,(WPARAM)pHVar12,uVar13);
          FUN_004bb658(param_1,&stack0xffffffb4);
          FUN_00408194(param_1 + 0x2e0,in_stack_ffffffb4);
        }
        else {
          while( true ) {
            uVar5 = FUN_00408514(*(undefined4 *)(param_1 + 0x2e0));
            cVar3 = FUN_0041d068(*(undefined4 *)(param_1 + 0x2e0),uVar5);
            if (cVar3 != '\x02') break;
            uVar5 = 0;
            if (*(int *)(param_1 + 0x2e0) != 0) {
              uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x2e0) + -4);
            }
            FUN_00408a54(param_1 + 0x2e0,uVar5,1);
          }
          uVar5 = 0;
          if (*(int *)(param_1 + 0x2e0) != 0) {
            uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x2e0) + -4);
          }
          FUN_00408a54(param_1 + 0x2e0,uVar5,1);
        }
      }
      else {
        FUN_0047a4f4(unaff_ESI,unaff_EDI);
      }
      *param_2 = 0;
      in_stack_ffffffd0 = 0x47a81a;
      FUN_00406268(param_1);
    }
    else if (uVar1 == 9) {
      if ((*(char *)(param_1 + 0x2d9) != '\0') && (cVar3 = FUN_0047908c(param_1), cVar3 != '\0')) {
        FUN_004790b0(param_1,0);
      }
    }
    else if (uVar1 != 0x1b) {
      if ((*(char *)(param_1 + 0x2d9) != '\0') && (cVar3 = FUN_0047908c(param_1), cVar3 == '\0')) {
        FUN_004790b0(param_1,1);
      }
      uVar13 = 0x47a84d;
      FUN_0047a4b0(&stack0xffffffec,&stack0xffffffe8);
      if (*(byte *)(param_1 + 0x2e6) < 2) {
        iVar8 = 0;
        if (*(int *)(param_1 + 0x2e0) != 0) {
          iVar8 = *(int *)(*(int *)(param_1 + 0x2e0) + -4);
        }
        bVar2 = unaff_ESI < iVar8;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        uVar5 = 0;
        if (*(int *)(param_1 + 0x2e0) != 0) {
          uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x2e0) + -4);
        }
        FUN_00408984(*(undefined4 *)(param_1 + 0x2e0),1,unaff_ESI);
        uVar13 = local_50;
        FUN_00408310(&local_54,*param_2);
        FUN_00408984(*(undefined4 *)(param_1 + 0x2e0),unaff_EDI + 1,uVar5);
        FUN_0040875c(&stack0xfffffff0,3);
        in_stack_ffffffc8 = local_58;
        in_stack_ffffffd0 = local_54;
      }
      else {
        FUN_00408310(&local_5c,*param_2,&stack0xfffffffc);
        FUN_00408678(&stack0xfffffff0,*(undefined4 *)(param_1 + 0x2e0),local_5c);
      }
      if ((*param_2 < 0xd800) || (0xdfff < *param_2)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        UVar11 = 0;
        UVar10 = 0;
        UVar9 = 0;
        pHVar6 = (HWND)FUN_004c45dc(param_1);
        local_50 = 0x47a931;
        BVar7 = PeekMessageW((LPMSG)&stack0xffffffcc,pHVar6,UVar9,UVar10,UVar11);
        if ((BVar7 != 0) && (in_stack_ffffffd0 == 0x102)) {
          FUN_00408310(&local_64,uVar13 & 0xffff);
          FUN_00408678(&local_60,unaff_EBX,local_64);
          cVar3 = FUN_0047a9f4(param_1,local_60);
          if (cVar3 != '\0') {
            UVar11 = 1;
            UVar10 = 0;
            UVar9 = 0;
            pHVar6 = (HWND)FUN_004c45dc(param_1);
            local_50 = 0x47a97f;
            PeekMessageW((LPMSG)&stack0xffffffcc,pHVar6,UVar9,UVar10,UVar11);
            *param_2 = 0;
          }
        }
      }
      else {
        cVar3 = FUN_0047a9f4(param_1,unaff_EBX);
        if (cVar3 != '\0') {
          *param_2 = 0;
        }
      }
    }
  }
  *in_FS_OFFSET = in_stack_ffffffc8;
  thunk_FUN_004072fc(&local_64,6,in_stack_ffffffd0);
  thunk_FUN_004072d8(&stack0xffffffb4);
  thunk_FUN_004072fc(&stack0xffffffb8,2);
  thunk_FUN_004072fc(&stack0xffffffc4,2);
  thunk_FUN_004072fc(&stack0xfffffff0,2);
  return;
}
