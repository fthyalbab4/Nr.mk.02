// rea decompile_all
// name: FUN_0040adec
// address: 0x40adec
// body: available
// range: 0x40adec-0x40af8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40ae41 (push 0x40af8b followed by fs-segment stack chaining); handler 0x40af8b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0040adec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  LANGID LVar3;
  LPCWSTR lpString2;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 uStack_244;
  undefined1 *puStack_240;
  undefined1 *puStack_23c;
  undefined4 local_22c;
  undefined4 local_228;
  int local_224;
  undefined4 local_220;
  undefined4 local_21c;
  int local_218;
  short *local_214;
  short sStack_210;
  undefined1 local_20e [522];

  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  puStack_23c = (undefined1 *)0x40ae25;
  local_220 = param_2;
  local_21c = param_1;
  thunk_FUN_00407660(param_1);
  puStack_23c = (undefined1 *)0x40ae30;
  thunk_FUN_00407660(local_220);
  puStack_240 = &LAB_0040af8b;
  uStack_244 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_244;
  puStack_23c = &stack0xfffffffc;
  FUN_00407eb8(param_3,0);
  cVar2 = '\0';
  iVar4 = 0x105;
  lpString2 = (LPCWSTR)FUN_00407f44(local_220);
  lstrcpynW((LPWSTR)local_20e,lpString2,iVar4);
  iVar4 = lstrlenW((LPCWSTR)local_20e);
  for (local_214 = &sStack_210 + iVar4; (*local_214 != 0x2e && ((short *)local_20e != local_214));
      local_214 = local_214 + -1) {
  }
  if ((short *)local_20e != local_214) {
    local_214 = local_214 + 1;
    *local_214 = 0;
    local_218 = 0x105 - ((int)local_214 - (int)local_20e >> 1);
    FUN_0040a93c(local_21c,&local_224);
    if (local_224 == 0) {
      LVar3 = GetUserDefaultUILanguage();
      FUN_0040a5f8(LVar3,&local_228);
      cVar2 = FUN_0040ace0(local_228);
      if ((cVar2 == '\0') && (DAT_00785b58 == '\0')) {
        LVar3 = GetSystemDefaultUILanguage();
        FUN_0040a5f8(LVar3,&local_22c);
        cVar2 = FUN_0040ace0(local_22c);
      }
      if (cVar2 == '\0') {
        cVar2 = FUN_0040ad90();
      }
    }
    else {
      cVar2 = FUN_0040ace0(local_224);
    }
  }
  if (cVar2 != '\0') {
    FUN_004080c8(param_3,local_20e,0x105);
  }
  puVar1 = puStack_23c;
  *in_FS_OFFSET = uStack_244;
  puStack_23c = &LAB_0040af92;
  puStack_240 = (undefined1 *)0x40af8a;
  thunk_FUN_00406e80(&local_22c,5,puVar1);
  return;
}
