// rea decompile_all
// name: FUN_00477bf0
// address: 0x477bf0
// body: available
// range: 0x477bf0-0x477cd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00477bf0(int param_1,int param_2)

{
  uint uVar1;

  FUN_004c0268(param_1,param_2);
  FUN_004c0194(param_1,param_2,L"EDIT");
  uVar1 = FUN_00406268(param_1);
  *(uint *)(param_2 + 4) =
       *(uint *)(&DAT_006811ec + (uint)*(byte *)(param_1 + 0x270) * 4 + (uVar1 & 0x7f) * 0xc) |
       *(uint *)(param_2 + 4) | 0xc0 |
       *(uint *)(&DAT_006811c4 + (uint)*(byte *)(param_1 + 0x278) * 4) |
       *(uint *)(&DAT_00681204 + (uint)(*(short *)(param_1 + 0x27a) != 0) * 4) |
       *(uint *)(&DAT_00681230 + (uint)*(byte *)(param_1 + 0x298) * 4) |
       *(uint *)(&DAT_0068120c + (uint)*(byte *)(param_1 + 0x27c) * 4) |
       *(uint *)(&DAT_00681214 + (uint)*(byte *)(param_1 + 0x281) * 4) |
       *(uint *)(&DAT_00681220 + (uint)*(byte *)(param_1 + 0x27f) * 4) |
       *(uint *)(&DAT_00681228 + (uint)*(byte *)(param_1 + 0x280) * 4);
  if (((*PTR_DAT_00688e94 != '\0') && (*(char *)(param_1 + 0x1e9) != '\0')) &&
     (*(char *)(param_1 + 0x278) == '\x01')) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xff7fffff;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}
