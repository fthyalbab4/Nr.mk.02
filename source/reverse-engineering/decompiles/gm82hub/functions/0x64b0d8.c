// rea decompile_all
// name: FUN_0064b0d8
// address: 0x64b0d8
// body: available
// range: 0x64b0d8-0x64b103 inclusive
// range: 0x64b120-0x64b1cd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b0d8(void)

{
  undefined4 uVar1;
  HANDLE hThread;
  HANDLE pvVar2;
  DWORD DVar3;

  uVar1 = FUN_004048b8();
  hThread = GetCurrentThread();
  switch(uVar1) {
  default:
    DVar3 = 0x20;
    pvVar2 = GetCurrentProcess();
    SetPriorityClass(pvVar2,DVar3);
    SetThreadPriority(hThread,0);
    break;
  case 1:
    DVar3 = 0x20;
    pvVar2 = GetCurrentProcess();
    SetPriorityClass(pvVar2,DVar3);
    SetThreadPriority(hThread,1);
    break;
  case 2:
    DVar3 = 0x80;
    pvVar2 = GetCurrentProcess();
    SetPriorityClass(pvVar2,DVar3);
    SetThreadPriority(hThread,2);
    break;
  case 3:
    DVar3 = 0x100;
    pvVar2 = GetCurrentProcess();
    SetPriorityClass(pvVar2,DVar3);
    SetThreadPriority(hThread,0xf);
    break;
  case 0xfffffffd:
    DVar3 = 0x40;
    pvVar2 = GetCurrentProcess();
    SetPriorityClass(pvVar2,DVar3);
    SetThreadPriority(hThread,-0xf);
    break;
  case 0xfffffffe:
    DVar3 = 0x20;
    pvVar2 = GetCurrentProcess();
    SetPriorityClass(pvVar2,DVar3);
    SetThreadPriority(hThread,-2);
    break;
  case 0xffffffff:
    DVar3 = 0x20;
    pvVar2 = GetCurrentProcess();
    SetPriorityClass(pvVar2,DVar3);
    SetThreadPriority(hThread,-1);
  }
  return;
}
