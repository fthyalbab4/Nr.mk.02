// rea decompile_all
// name: FUN_00593344
// address: 0x593344
// body: available
// range: 0x593344-0x59365d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59336d (push 0x59365e followed by fs-segment stack chaining); handler 0x59365e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00593344(int param_1,WCHAR *param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined1 uVar6;
  WCHAR WVar7;
  WCHAR *pWVar8;
  BOOL BVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  WCHAR *local_10;
  int local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_10 = (WCHAR *)0x0;
  uStack_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_0059365e;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_3;
  local_8 = param_1;
  cVar5 = FUN_005903e0(*(undefined4 *)(param_1 + 0x2a0),param_3);
  if ((byte)(cVar5 - 1U) < 2) {
    WVar7 = FUN_00590874(*(undefined2 *)(*(int *)(local_8 + 0x2a0) + -2 + local_c * 2));
    *param_2 = WVar7;
    goto LAB_0059363b;
  }
  uVar6 = FUN_00590748(*(undefined4 *)(local_8 + 0x2a0),local_c);
  uStack_14 = CONCAT13(uVar6,(undefined3)uStack_14);
  uVar1 = *(ushort *)(*(int *)(local_8 + 0x2a0) + -2 + local_c * 2);
  if (uVar1 < 0x44) {
    if (uVar1 == 0x43) {
LAB_00593464:
      if (((ushort)*param_2 < 0xd800) || (0xdfff < (ushort)*param_2)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((!bVar3) || (cVar5 = FUN_005932b8(*param_2), cVar5 == '\0')) &&
         (BVar9 = IsCharAlphaW(*param_2), BVar9 != 0)) {
        FUN_004081e8(&local_10,&LAB_0059367c);
        pWVar8 = (WCHAR *)thunk_FUN_00408c9c(&local_10);
        *pWVar8 = *param_2;
        if ((uStack_14 & 0x2000000) == 0) {
          if ((uStack_14 & 0x4000000) != 0) {
            FUN_00415934(local_10,&local_1c);
            FUN_004081e8(&local_10,local_1c);
          }
        }
        else {
          FUN_004158a4(local_10,&local_18);
          FUN_004081e8(&local_10,local_18);
        }
        pWVar8 = local_10;
        if ((local_10 != (WCHAR *)0x0) && (local_10[-5] != L'\x02')) {
          pWVar8 = (WCHAR *)FUN_00407488(&local_10,local_10);
        }
        *param_2 = *pWVar8;
      }
      goto LAB_0059363b;
    }
    if (((uVar1 == 0x23) || (uVar1 == 0x30)) || ((uVar1 == 0x39 || (uVar1 != 0x41))))
    goto LAB_0059363b;
  }
  else if ((uVar1 != 0x4c) && (uVar1 != 0x61)) {
    if (uVar1 == 99) goto LAB_00593464;
    if (uVar1 != 0x6c) goto LAB_0059363b;
  }
  if (((ushort)*param_2 < 0xd800) || (0xdfff < (ushort)*param_2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    FUN_005932b8(*param_2);
  }
  else {
    FUN_004081e8(&local_10,&LAB_0059367c);
    pWVar8 = (WCHAR *)thunk_FUN_00408c9c(&local_10);
    *pWVar8 = *param_2;
    cVar5 = FUN_005932a0(*param_2);
    if (cVar5 == '\0') {
      BVar9 = IsCharAlphaW(*param_2);
      if (BVar9 == 0) {
        sVar2 = *(short *)(*(int *)(local_8 + 0x2a0) + -2 + local_c * 2);
        if ((sVar2 == 0x41) || (sVar2 == 0x61)) {
          IsCharAlphaNumericW(*param_2);
        }
      }
      else if ((uStack_14 & 0x2000000) == 0) {
        if ((uStack_14 & 0x4000000) != 0) {
          FUN_00415934(local_10,&local_24);
          FUN_004081e8(&local_10,local_24);
        }
      }
      else {
        FUN_004158a4(local_10,&local_20);
        FUN_004081e8(&local_10,local_20);
      }
      pWVar8 = local_10;
      if ((local_10 != (WCHAR *)0x0) && (local_10[-5] != L'\x02')) {
        pWVar8 = (WCHAR *)FUN_00407488(&local_10,local_10);
      }
      *param_2 = *pWVar8;
    }
    else {
      pWVar8 = local_10;
      if ((local_10 != (WCHAR *)0x0) && (local_10[-5] != L'\x02')) {
        pWVar8 = (WCHAR *)FUN_00407488(&local_10,local_10);
      }
      *param_2 = *pWVar8;
    }
  }
LAB_0059363b:
  puVar4 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00593665;
  puStack_38 = (undefined1 *)0x593655;
  thunk_FUN_004072fc(&local_24,4,puVar4);
  puStack_38 = (undefined1 *)0x59365d;
  thunk_FUN_004072d8(&local_10);
  return;
}
