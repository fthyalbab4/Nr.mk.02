// rea decompile_all
// name: FUN_00567b78
// address: 0x567b78
// body: available
// range: 0x567b78-0x567d5c inclusive
// range: 0x567d70-0x567e1e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x567bb3 (push 0x567e1f followed by fs-segment stack chaining); handler 0x567e1f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x567ce8 (push 0x567d5d followed by fs-segment stack chaining); handler 0x567d5d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567b78(int param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  char cVar5;
  BYTE *pBVar6;
  uint uVar7;
  HWND pHVar8;
  int iVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  UINT UVar11;
  LPARAM LVar12;
  undefined4 uStack_244;
  undefined1 *puStack_240;
  undefined4 uStack_238;
  undefined1 *puStack_234;
  undefined1 *puStack_230;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined4 local_210;
  BYTE local_20c [16];
  undefined1 local_1fc;
  BYTE local_10c [256];
  int local_c;
  int local_8;

  puStack_230 = &stack0xfffffffc;
  local_224 = 0;
  local_220 = 0;
  local_21c = 0;
  local_214 = 0;
  local_210 = 0;
  puStack_234 = &LAB_00567e1f;
  uStack_238 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_238;
  puVar4 = &stack0xfffffffc;
  local_8 = param_1;
  if (0 < param_2) {
    FUN_00567578(param_1,&local_210);
    cVar5 = FUN_0041d1d4(local_210,param_2);
    puVar4 = puStack_230;
    if (cVar5 == '\x01') {
      param_2 = param_2 + -1;
    }
  }
  puStack_230 = puVar4;
  local_c = param_2;
  cVar5 = FUN_0056792c(local_8);
  if (cVar5 == '\0') {
    if (local_c < 0) {
      local_c = 0;
    }
    FUN_00567578(local_8,&local_220);
    local_218 = local_220;
    iVar9 = 0;
    if (local_220 != 0) {
      iVar9 = *(int *)(local_220 + -4);
    }
    if (iVar9 <= local_c) {
      FUN_00567578(local_8,&local_224);
      local_218 = local_224;
      local_c = 0;
      if (local_224 != 0) {
        local_c = *(int *)(local_224 + -4);
      }
    }
    FUN_00567b54(local_8,local_c,local_c);
  }
  else {
    if (local_c < 0) {
      local_c = 0;
    }
    iVar3 = local_c;
    iVar10 = local_c + 1;
    FUN_00567578(local_8,&local_214);
    local_218 = local_214;
    iVar9 = 0;
    if (local_214 != 0) {
      iVar9 = *(int *)(local_214 + -4);
    }
    if (iVar10 < iVar9) {
      FUN_00567578(local_8,&local_21c);
      uVar1 = *(ushort *)(local_21c + -2 + iVar10 * 2);
      if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar10 = iVar3 + 2;
      }
    }
    iVar9 = *(int *)(local_8 + 0x2a8);
    if (iVar9 <= local_c) {
      iVar10 = iVar9;
      local_c = iVar9;
    }
    FUN_00567b54(local_8,iVar10,iVar10);
    if (iVar10 != local_c) {
      puStack_240 = (undefined1 *)0x567c8f;
      GetKeyboardState(local_10c);
      iVar9 = 0x100;
      pBVar6 = local_20c;
      do {
        *pBVar6 = '\0';
        pBVar6 = pBVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      local_1fc = 0x81;
      uVar7 = FUN_00405d08(local_8);
      local_20c[*(ushort *)(&DAT_0077c00c + (uVar7 & 0x7f) * 2)] = 0x81;
      puStack_240 = (undefined1 *)0x567cd3;
      SetKeyboardState(local_20c);
      *(undefined1 *)(local_8 + 700) = 1;
      puStack_240 = &LAB_00567d5d;
      uStack_244 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_244;
      LVar12 = 1;
      uVar7 = FUN_00405d08(local_8);
      uVar7 = (uint)*(ushort *)(&DAT_0077c00c + (uVar7 & 0x7f) * 2);
      UVar11 = 0x100;
      pHVar8 = (HWND)FUN_004f76a8(local_8);
      SendMessageW(pHVar8,UVar11,uVar7,LVar12);
      LVar12 = 1;
      uVar7 = FUN_00405d08(local_8);
      uVar7 = (uint)*(ushort *)(&DAT_0077c00c + (uVar7 & 0x7f) * 2);
      UVar11 = 0x101;
      pHVar8 = (HWND)FUN_004f76a8(local_8);
      SendMessageW(pHVar8,UVar11,uVar7,LVar12);
      *in_FS_OFFSET = uStack_244;
      *(undefined1 *)(local_8 + 700) = 0;
      return;
    }
    *(int *)(local_8 + 0x2b0) = local_c;
  }
  puVar4 = puStack_230;
  *in_FS_OFFSET = uStack_238;
  puStack_230 = &LAB_00567e26;
  puStack_234 = (undefined1 *)0x567e0e;
  thunk_FUN_00406e80(&local_224,3,puVar4);
  puStack_234 = (undefined1 *)0x567e1e;
  thunk_FUN_00406e80(&local_214,2);
  return;
}
