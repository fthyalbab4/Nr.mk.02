// rea decompile_all
// name: FUN_004169c8
// address: 0x4169c8
// body: available
// range: 0x4169c8-0x416a36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004169c8(void)

{
  int iVar1;

  iVar1 = FUN_00409a18(DAT_00785d94);
  if (iVar1 == 0) {
    FUN_00409be0(&DAT_00785d94,&DAT_004129bc,1,1);
    FUN_00407eb8(DAT_00785d94,L"True");
  }
  iVar1 = FUN_00409a18(DAT_00785d98);
  if (iVar1 == 0) {
    FUN_00409be0(&DAT_00785d98,&DAT_004129e4,1,1);
    FUN_00407eb8(DAT_00785d98,L"False");
  }
  return;
}
