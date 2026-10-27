// rea decompile_all
// name: FUN_0047dac8
// address: 0x47dac8
// body: available
// range: 0x47dac8-0x47dbf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47daee (push 0x47dbf9 followed by fs-segment stack chaining); handler 0x47dbf9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047dac8(int *param_1,int param_2,int *param_3,ushort param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HDC hdc;
  LPCWSTR lpchText;
  int cchText;
  uint *in_FS_OFFSET;
  tagRECT *lprc;
  UINT format;
  uint in_stack_ffffffc4;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  tagRECT local_1c;
  UINT local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_1c.left = *param_3;
  local_1c.top = param_3[1];
  local_1c.right = param_3[2];
  local_1c.bottom = param_3[3];
  puStack_30 = &LAB_0047dbf9;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&puStack_34;
  if (*(short *)((int)param_1 + 0x2ba) == 0) {
    (**(code **)(*(int *)param_1[0xa4] + 0x4c))((int *)param_1[0xa4],&local_1c);
    iVar3 = (**(code **)(*param_1 + 0x108))();
    if (param_2 < iVar3) {
      local_c = FUN_004be40c(param_1,0x824);
      cVar2 = FUN_00406268(param_1);
      if (cVar2 == '\0') {
        local_1c.left = local_1c.left + 2;
      }
      else {
        local_1c.right = local_1c.right + -2;
      }
      FUN_004081e8(&local_8,0);
      if ((byte)((char)param_1[0xa8] - 3U) < 2) {
        FUN_0047e14c(param_1,param_2,&local_8);
      }
      else {
        (**(code **)(*(int *)param_1[0xa0] + 0xc))((int *)param_1[0xa0],param_2,&local_8);
      }
      hdc = (HDC)FUN_0045d4ec(param_1[0xa4]);
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407488(&local_8,local_8);
      }
      cchText = 0;
      if (iVar3 != 0) {
        cchText = *(int *)(iVar3 + -4);
      }
      lprc = &local_1c;
      format = local_c;
      lpchText = (LPCWSTR)FUN_00408220(local_8);
      DrawTextW(hdc,lpchText,cchText,lprc,format);
    }
  }
  else {
    in_stack_ffffffc4 = (uint)param_4;
    puStack_2c = &stack0xfffffffc;
    (*(code *)param_1[0xae])(param_1[0xaf],param_1,param_2,in_stack_ffffffc4,&local_1c);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = in_stack_ffffffc4;
  puStack_34 = &LAB_0047dc00;
  thunk_FUN_004072d8(&local_8,in_stack_ffffffc4,puVar1);
  return;
}
