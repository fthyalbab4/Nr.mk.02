// rea decompile_all
// name: FUN_004942d4
// address: 0x4942d4
// body: available
// range: 0x4942d4-0x49450a inclusive
// range: 0x494512-0x494521 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4944a4 (push 0x49450b followed by fs-segment stack chaining); handler 0x49450b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004942d4(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;
  undefined4 *in_FS_OFFSET;
  UINT wMsgFilterMin;
  undefined4 uVar4;
  UINT wMsgFilterMax;
  UINT wRemoveMsg;
  tagMSG local_30;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_14 = param_2;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    iVar2 = *param_2;
    if (iVar2 == 0x200) {
      cVar1 = FUN_004941a4(param_2);
      if (cVar1 == '\0') {
        (**(code **)(*local_8 + -0x10))(local_8,local_14);
      }
      else {
        cVar1 = FUN_004ba7ac(local_10);
        if (cVar1 != '\x01') {
          (**(code **)(*local_8 + -0x10))(local_8,local_14);
        }
      }
    }
    else {
      if (iVar2 != 0x201) {
        if (iVar2 == 0x202) {
          cVar1 = FUN_004941a4(param_2);
          if (cVar1 != '\0') {
            (**(code **)(*local_8 + -0x10))(local_8,local_14);
            if ((local_c == local_10) ||
               (cVar1 = FUN_004061f8(local_10,&PTR_LAB_00488b04), cVar1 != '\0')) {
              if ((*(char *)(local_10 + 0x1b2) != '\0') &&
                 (((*(char *)(local_10 + 0x1b3) != '\0' && (*(char *)(local_10 + 0x1b0) != '\0')) &&
                  (*(char *)(local_10 + 0x1c6) == '\x01')))) {
                FUN_0049024c(local_10,0);
              }
              FUN_00491b74(local_8);
            }
            else {
              cVar1 = FUN_004061f8(local_c,&PTR_LAB_00488b04);
              if (cVar1 != '\0') {
                return;
              }
              if (*(char *)(local_10 + 0x1c6) == '\x02') {
                return;
              }
            }
          }
          goto LAB_00494512;
        }
        if (iVar2 != 0x203) goto LAB_00494512;
      }
      cVar1 = FUN_004941a4(param_2);
      if (cVar1 != '\0') {
        if ((*(char *)((int)local_8 + 0x351) != '\0') &&
           (cVar1 = FUN_004bb8c8(local_8), cVar1 != '\0')) {
          FUN_004bb8d8(local_10,1);
        }
        if ((*(char *)(local_10 + 0x1c6) != '\x02') ||
           ((iVar2 = FUN_0048b734(), 0x40046 < iVar2 &&
            ((int)(short)local_14[2] < *(int *)(local_10 + 0x40) + *(int *)(local_10 + 0x48) + -0xe)
            ))) {
          FUN_004c12a8(local_8,local_14);
        }
        cVar1 = FUN_004bbf84(local_10);
        if (cVar1 == '\0') {
          (**(code **)(*local_8 + -0x10))(local_8,local_14);
        }
        if (*(char *)(local_10 + 0x1c6) == '\x02') {
          return;
        }
        if ((*(int *)(local_10 + 0x1c0) == 0) && (*(int *)(local_10 + 0x1bc) == 0)) {
          return;
        }
        uVar4 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffc0;
        FUN_00494264(local_10);
        *in_FS_OFFSET = uVar4;
        local_30.message = 0;
        wRemoveMsg = 1;
        wMsgFilterMax = 0x201;
        wMsgFilterMin = 0x201;
        hWnd = (HWND)FUN_004c45dc(local_8,uVar4,&stack0xfffffffc);
        BVar3 = PeekMessageW(&local_30,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
        if ((BVar3 == 0) || (local_30.message != 0x12)) {
          *local_14 = 0x202;
          (**(code **)(*local_8 + -0x14))(local_8,local_14);
        }
        else {
          PostQuitMessage(local_30.wParam);
        }
        return;
      }
    }
  }
LAB_00494512:
  FUN_004c12a8(local_8,local_14);
  return;
}
