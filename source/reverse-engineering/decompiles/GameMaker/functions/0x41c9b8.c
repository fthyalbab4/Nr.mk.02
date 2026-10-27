// rea decompile_all
// name: FUN_0041c9b8
// address: 0x41c9b8
// body: available
// range: 0x41c9b8-0x41cb72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41c9eb (push 0x41cb73 followed by fs-segment stack chaining); handler 0x41cb73 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c9b8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puStack_28c;
  undefined1 *puStack_288;
  undefined1 *puStack_284;
  undefined4 local_278;
  undefined4 local_274;
  undefined1 local_270;
  undefined4 local_26c;
  undefined1 local_268;
  undefined4 local_264;
  undefined1 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined1 local_24c;
  undefined4 local_248;
  undefined1 local_244;
  undefined4 local_240;
  undefined1 local_23c;
  undefined4 local_238;
  undefined1 local_234;
  WCHAR local_22e [261];
  _MEMORY_BASIC_INFORMATION local_24;
  undefined4 local_8;

  puStack_284 = &stack0xfffffffc;
  local_278 = 0;
  local_254 = 0;
  local_25c = 0;
  local_258 = 0;
  local_8 = 0;
  puStack_288 = &LAB_0041cb73;
  puStack_28c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28c;
  iVar1 = *(int *)(in_stack_00000004 + -4);
  if (*(int *)(iVar1 + 0x14) == 0) {
    puStack_284 = &stack0xfffffffc;
    FUN_0040b75c(PTR_PTR_00782978,&local_8);
  }
  else {
    FUN_0040b75c(PTR_PTR_007822a0,&local_8);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  VirtualQuery(*(LPCVOID *)(iVar1 + 0xc),&local_24,0x1c);
  if (local_24.State == 0x1000) {
    DVar4 = GetModuleFileNameW(local_24.AllocationBase,local_22e,0x105);
    if (DVar4 != 0) {
      local_250 = *(undefined4 *)(iVar1 + 0xc);
      local_24c = 5;
      FUN_004080c8(&local_258,local_22e,0x105);
      FUN_00417398(local_258,&local_254);
      local_248 = local_254;
      local_244 = 0x11;
      local_240 = local_8;
      local_23c = 0x11;
      local_234 = 5;
      puVar6 = &local_250;
      uVar5 = 3;
      local_238 = uVar2;
      FUN_0040b75c(PTR_PTR_007824ec,&local_25c);
      FUN_0041bef4(&PTR_LAB_00411df4,1,local_25c,uVar5,puVar6);
      goto LAB_0041cb42;
    }
  }
  local_274 = *(undefined4 *)(iVar1 + 0xc);
  local_270 = 5;
  local_26c = local_8;
  local_268 = 0x11;
  local_260 = 5;
  puVar6 = &local_274;
  uVar5 = 2;
  local_264 = uVar2;
  FUN_0040b75c(PTR_PTR_007822e4,&local_278);
  FUN_0041bef4(&PTR_LAB_00411df4,1,local_278,uVar5,puVar6);
LAB_0041cb42:
  puVar3 = puStack_28c;
  *in_FS_OFFSET = uVar5;
  puStack_28c = &LAB_0041cb7a;
  thunk_FUN_00406e5c(&local_278,uVar5,puVar3);
  thunk_FUN_00406e80(&local_25c,3);
  thunk_FUN_00406e5c(&local_8);
  return;
}
