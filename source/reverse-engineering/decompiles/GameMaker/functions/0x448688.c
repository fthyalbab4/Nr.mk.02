// rea decompile_all
// name: FUN_00448688
// address: 0x448688
// body: available
// range: 0x448688-0x4487de inclusive
// range: 0x4487e6-0x4487fd inclusive
// range: 0x448846-0x44884a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x448727 (push 0x448825 followed by fs-segment stack chaining); handler 0x448825 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44873f (push 0x4487fe followed by fs-segment stack chaining); handler 0x4487fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4487b6 (push 0x4487df followed by fs-segment stack chaining); handler 0x4487df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448688(undefined4 param_1,int param_2,byte param_3)

{
  DWORD DVar1;
  HANDLE pvVar2;
  byte bVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_38;
  int local_1c [3];
  int *local_10;
  byte local_9;
  int local_8;

  local_9 = param_3;
  local_8 = param_2;
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)PTR_DAT_0078296c) {
    if (*(short *)(local_8 + 10) == 0) {
      if (*(int *)(local_8 + 0x10) != 0) {
        (**(code **)(**(int **)(local_8 + 0x10) + 0xc))();
      }
    }
    else {
      (**(code **)(local_8 + 8))(*(undefined4 *)(local_8 + 0xc));
    }
    return;
  }
  if (local_9 == 0) {
    local_10 = local_1c;
  }
  else {
    local_10 = (int *)FUN_0040431c(0xc);
  }
  bVar3 = local_9 ^ 1;
  if (bVar3 == 0) {
    local_10[2] = 0;
  }
  else {
    pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,-1,0,(LPCWSTR)0x0);
    local_10[2] = (int)pvVar2;
  }
  *in_FS_OFFSET = &stack0xffffffd4;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  *(byte *)(local_10 + 1) = local_9;
  if (DAT_007740a8 == 0) {
    DAT_007740a8 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  }
  *local_10 = local_8;
  FUN_0043ae88(DAT_007740a8,local_10);
  FUN_00447d84();
  if (DAT_00774060._2_2_ != 0) {
    (*DAT_00774060)(DAT_00774064,*(undefined4 *)*local_10);
  }
  if (bVar3 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    WaitForSingleObject((HANDLE)local_10[2],0xffffffff);
    *in_FS_OFFSET = uStack_44;
    uStack_44 = 0x4487de;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
    return;
  }
  *in_FS_OFFSET = uStack_38;
  uStack_38 = 0x4487fd;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00787f7c);
  return;
}
