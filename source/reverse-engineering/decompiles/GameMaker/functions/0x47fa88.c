// rea decompile_all
// name: FUN_0047fa88
// address: 0x47fa88
// body: available
// range: 0x47fa88-0x47fc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047fa88(int *param_1,int *param_2)

{
  char cVar1;
  COLORREF CVar2;
  int iVar3;
  LRESULT LVar4;

  if (((*(byte *)(param_1 + 7) & 0x10) == 0) &&
     ((((*param_2 == 0x201 || (*param_2 == 0x203)) && (cVar1 = FUN_004eefcc(param_1), cVar1 == '\0')
       ) && (cVar1 = FUN_004ed7f4(param_1), cVar1 == '\x01')))) {
    cVar1 = FUN_004f40d8(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    param_1[0x15] = param_1[0x15] | 1;
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
    return;
  }
  iVar3 = *param_2;
  if (iVar3 < 0x84) {
    if (iVar3 == 0x83) {
      return;
    }
    if (iVar3 == 5) {
      if ((char)param_1[0xb1] != '\0') {
        (**(code **)(*param_1 + -0x10))(param_1,param_2);
        return;
      }
    }
    else if ((iVar3 == 0x7b) && (param_1[0x1f] == 0)) {
      LVar4 = CallWindowProcW((WNDPROC)param_1[0xaf],(HWND)param_1[0xac],0x7b,param_2[1],param_2[2])
      ;
      param_2[3] = LVar4;
      return;
    }
  }
  else if (iVar3 == 0x102) {
    cVar1 = FUN_004f63ec(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    if ((((short)param_2[1] == 0xd) || ((short)param_2[1] == 0x1b)) &&
       (cVar1 = FUN_0047f2ac(param_1), cVar1 != '\0')) {
      FUN_0047f2d0(param_1,0);
      return;
    }
  }
  else if (iVar3 - 0x132U < 7) {
    CVar2 = FUN_0045aa34(*(undefined4 *)(param_1[0x19] + 0x18));
    SetTextColor((HDC)param_2[1],CVar2);
    CVar2 = FUN_0045aa34(*(undefined4 *)(*(int *)(param_1[0x70] + 0x10) + 0x14));
    SetBkColor((HDC)param_2[1],CVar2);
    iVar3 = FUN_0045bc84(param_1[0x70]);
    param_2[3] = iVar3;
    if ((*(byte *)((int)param_1 + 0x55) & 0x80) == 0) {
      return;
    }
    if ((char)param_1[0x9f] != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x9f) = 1;
    PostMessageW((HWND)param_1[0xac],0xb04d,0,0);
    return;
  }
  FUN_004f42f0(param_1,param_2);
  return;
}
