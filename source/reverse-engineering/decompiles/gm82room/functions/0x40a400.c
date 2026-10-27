// rea decompile_all
// name: FUN_0040a400
// address: 0x40a400
// body: available
// range: 0x40a400-0x40a566 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40a430 (push 0x40a567 followed by fs-segment stack chaining); handler 0x40a567 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a400(ushort param_1,int *param_2)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_19c;
  undefined4 in_stack_fffffe6c;
  undefined4 uStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  WCHAR local_164 [85];
  WCHAR local_ba [85];
  uint local_10;
  int *local_c;

  puStack_180 = &stack0xfffffffc;
  local_168 = 0;
  local_16c = 0;
  local_170 = 0;
  puStack_184 = &LAB_0040a567;
  uStack_188 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_188;
  local_c = param_2;
  FUN_00408194(param_2,0);
  if ((DAT_0067c810 <= param_1) && (param_1 <= DAT_0067ca10)) {
    uVar3 = 0x40;
    local_10 = 0;
    do {
      uVar2 = local_10 + uVar3 >> 1;
      if (param_1 < (&DAT_0067c810)[uVar2 * 4]) {
        uVar3 = uVar2 - 1;
      }
      else {
        if (param_1 <= (&DAT_0067c810)[uVar2 * 4]) {
          FUN_0040a310((&PTR_s_zh_TW_zh_Hant_zh_0067c814)[uVar2 * 2],local_c);
          break;
        }
        local_10 = uVar2 + 1;
      }
    } while (local_10 <= uVar3);
  }
  if (*local_c == 0) {
    in_stack_fffffe6c = 0x40a4b1;
    BVar1 = IsValidLocale((uint)param_1,2);
    if (BVar1 != 0) {
      GetLocaleInfoW((uint)param_1,0x59,local_ba,0x55);
      GetLocaleInfoW((uint)param_1,0x5a,local_164,0x55);
      FUN_004083a4(&local_168,local_ba,0x55);
      FUN_004083a4(&local_16c,local_164,0x55,&DAT_0040a584,local_168);
      in_stack_fffffe6c = local_16c;
      FUN_004083a4(&local_170,local_ba,0x55,&DAT_0040a594);
      uStackY_19c = local_170;
      FUN_0040875c(local_c,5);
    }
  }
  *in_FS_OFFSET = uStackY_19c;
  thunk_FUN_004072fc(&local_170,3,in_stack_fffffe6c,&LAB_0040a56e);
  return;
}
