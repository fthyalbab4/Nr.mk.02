// rea decompile_all
// name: FUN_005017b8
// address: 0x5017b8
// body: available
// range: 0x5017b8-0x5018a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005017b8(int param_1)

{
  undefined4 uVar1;
  HBITMAP pHVar2;

  uVar1 = FUN_00462804(&PTR_FUN_00458e94,1);
  *(undefined4 *)(param_1 + 0x318) = uVar1;
  uVar1 = FUN_00462804(&PTR_FUN_00458e94,1);
  *(undefined4 *)(param_1 + 0x31c) = uVar1;
  uVar1 = FUN_00462804(&PTR_FUN_00458e94,1);
  *(undefined4 *)(param_1 + 800) = uVar1;
  uVar1 = FUN_00462804(&PTR_FUN_00458e94,1);
  *(undefined4 *)(param_1 + 0x324) = uVar1;
  uVar1 = FUN_00462804(&PTR_FUN_00458e94,1);
  *(undefined4 *)(param_1 + 0x328) = uVar1;
  pHVar2 = LoadBitmapW(DAT_0068cc40,L"FLOPPY");
  FUN_0046410c(*(undefined4 *)(param_1 + 0x318),pHVar2);
  pHVar2 = LoadBitmapW(DAT_0068cc40,L"HARD");
  FUN_0046410c(*(undefined4 *)(param_1 + 0x31c),pHVar2);
  pHVar2 = LoadBitmapW(DAT_0068cc40,L"NETWORK");
  FUN_0046410c(*(undefined4 *)(param_1 + 800),pHVar2);
  pHVar2 = LoadBitmapW(DAT_0068cc40,L"CDROM");
  FUN_0046410c(*(undefined4 *)(param_1 + 0x324),pHVar2);
  pHVar2 = LoadBitmapW(DAT_0068cc40,L"RAM");
  FUN_0046410c(*(undefined4 *)(param_1 + 0x328),pHVar2);
  return;
}
