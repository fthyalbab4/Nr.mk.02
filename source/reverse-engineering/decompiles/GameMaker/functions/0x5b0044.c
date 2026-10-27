// rea decompile_all
// name: FUN_005b0044
// address: 0x5b0044
// body: available
// range: 0x5b0044-0x5b02d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0044(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_18;
  int local_14;

  if (param_1 != 0) {
    uVar2 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    FUN_00702dfc(param_1,param_3,0);
    local_5c = *(int *)(param_1 + 8);
    if (-1 < local_5c + -1) {
      local_18 = 0;
      do {
        local_60 = *(int *)(param_1 + 4);
        if (-1 < local_60 + -1) {
          local_14 = 0;
          do {
            local_64 = param_2;
            if (-1 < param_2 + -1) {
              do {
                local_68 = param_2;
                if (-1 < param_2 + -1) {
                  do {
                    FUN_00404878();
                    FUN_00404878();
                    local_68 = local_68 + -1;
                  } while (local_68 != 0);
                }
                local_64 = local_64 + -1;
              } while (local_64 != 0);
            }
            uVar1 = FUN_00404878((int)((longlong)param_2 * (longlong)param_2),
                                 (int)((ulonglong)((longlong)param_2 * (longlong)param_2) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + 2 + (local_18 * *(int *)(param_1 + 4) + local_14) * 4) =
                 uVar1;
            uVar1 = FUN_00404878((int)((longlong)param_2 * (longlong)param_2),
                                 (int)((ulonglong)((longlong)param_2 * (longlong)param_2) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + 1 + (local_18 * *(int *)(param_1 + 4) + local_14) * 4) =
                 uVar1;
            uVar1 = FUN_00404878((int)((longlong)param_2 * (longlong)param_2),
                                 (int)((ulonglong)((longlong)param_2 * (longlong)param_2) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + (local_18 * *(int *)(param_1 + 4) + local_14) * 4) = uVar1;
            uVar1 = FUN_00404878((int)((longlong)param_2 * (longlong)param_2),
                                 (int)((ulonglong)((longlong)param_2 * (longlong)param_2) >> 0x20));
            *(undefined1 *)
             (*(int *)(param_1 + 0xc) + 3 + (local_18 * *(int *)(param_1 + 4) + local_14) * 4) =
                 uVar1;
            local_14 = local_14 + 1;
            local_60 = local_60 + -1;
          } while (local_60 != 0);
        }
        local_18 = local_18 + 1;
        local_5c = local_5c + -1;
      } while (local_5c != 0);
    }
    FUN_00405a7c(uVar2);
  }
  return;
}
