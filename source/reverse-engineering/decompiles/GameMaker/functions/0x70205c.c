// rea decompile_all
// name: FUN_0070205c
// address: 0x70205c
// body: available
// range: 0x70205c-0x7022da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070205c(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_60;
  int local_5c;
  int local_58;
  int local_14;
  int local_10;

  if (((0 < param_2) && (0 < param_3)) &&
     ((param_2 != *(int *)(param_1 + 4) || (*(int *)(param_1 + 8) != param_3)))) {
    uVar2 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    FUN_00701e14(param_1,param_2,param_3);
    if (param_4 < 1) {
      param_4 = 1;
    }
    local_58 = *(int *)(param_1 + 8);
    if (-1 < local_58 + -1) {
      local_14 = 0;
      do {
        local_5c = *(int *)(param_1 + 4);
        if (-1 < local_5c + -1) {
          local_10 = 0;
          do {
            local_60 = param_4;
            if (-1 < param_4 + -1) {
              do {
                iVar3 = param_4;
                if (-1 < param_4 + -1) {
                  do {
                    FUN_00410538();
                    FUN_00410538();
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                local_60 = local_60 + -1;
              } while (local_60 != 0);
            }
            uVar1 = FUN_00404878((int)((longlong)param_4 * (longlong)param_4),
                                 (int)((ulonglong)((longlong)param_4 * (longlong)param_4) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + 2 + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                 uVar1;
            uVar1 = FUN_00404878((int)((longlong)param_4 * (longlong)param_4),
                                 (int)((ulonglong)((longlong)param_4 * (longlong)param_4) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + 1 + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                 uVar1;
            uVar1 = FUN_00404878((int)((longlong)param_4 * (longlong)param_4),
                                 (int)((ulonglong)((longlong)param_4 * (longlong)param_4) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) = uVar1;
            uVar1 = FUN_00404878((int)((longlong)param_4 * (longlong)param_4),
                                 (int)((ulonglong)((longlong)param_4 * (longlong)param_4) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + 3 + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                 uVar1;
            local_10 = local_10 + 1;
            local_5c = local_5c + -1;
          } while (local_5c != 0);
        }
        local_14 = local_14 + 1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
    FUN_00405a7c(uVar2);
  }
  return;
}
